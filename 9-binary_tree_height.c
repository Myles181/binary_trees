#include "binary_trees.h"

/**
 * binary_tree_height - Find height of tree
 * @tree: Pointer to node of tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL)
	{
		binary_tree_height(tree->left);
		height += 1;
	}
	else
	{
		height = 0;
	}
	if (tree->right)
	{
		binary_tree_height(tree->right);
		height += 1;
	}
	else
	{
		height = 0;
	}
	return (height);
}
