#include "binary_trees.h"

/**
 * binary_tree_nodes -  counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the node tree
 * Return: count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		count += 1;
	}
	if (tree->left && tree->right)
		count += 2;
	return (count);
}
