#include "binary_trees.h"

/**
 * binary_tree_size - Find the size of the tree
 * @tree: the pointer to the node
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, size;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_size(tree->left);

	if (tree->right)
		right = binary_tree_size(tree->right);

	size = left + right + 1;
	return (size);
}
