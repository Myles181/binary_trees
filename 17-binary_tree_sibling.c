#include "binary_trees.h"

/**
 * binary_tree_sibling - It finds the sibling of a node
 * @node: Node to find its sibling
 * Return: sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (!node || !node->parent)
		return (NULL);

	if (node != node->parent->left)
	{
		if (node->parent->left == NULL)
			return (NULL);
		sibling = node->parent->left;
	}
	if (node != node->parent->right)
	{
		if (node->parent->right == NULL)
			return (NULL);
		sibling = node->parent->right;
	}
	return (sibling);
}
