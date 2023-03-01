#include "binary_trees.h"

/**
 * binary_tree_height - Find height of tree
 * @tree: Pointer to node of tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, height;

	if (!tree)
		return (0);

	/* Check if tree->left is not empty*/
	if (tree->left)
	{
		/* Count number of edges at left */
		left = 1 + binary_tree_height(tree->left);
	}
	/*Check if tree->right is not empty*/
	if (tree->right)
	{
		/*Count number of edges at right*/
		right = 1 + binary_tree_height(tree->right);
	}
	/*Select the maximum height of each side*/
	if (left > right)
		height = left;
	else
		height = right;

	return (height);
}
