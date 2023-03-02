#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of the given node in the tree
 * @node: Node to check uncle
 * Return: uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node)
		return (NULL);

	if (node->parent != node->parent->parent->left)
	{
		if (node->parent->parent->left == NULL)
			return (NULL);
		uncle = node->parent->parent->left;
	}
	if (node->parent != node->parent->parent->right)
	{
		if (node->parent->parent->right == NULL)
			return (NULL);
		uncle = node->parent->parent->right;
	}
	return (uncle);
}
