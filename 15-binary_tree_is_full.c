#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if tree is full
 * @tree: pointer to the node to check
 * Return: 
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
