#include "binary_trees.h"

/**
 * binary_tree_depth - Find the depth of the tree
 * @tree: The pointer to the node
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
	{
		depth = 1 + binary_tree_depth(tree->parent);
	}
	return (depth);

}
