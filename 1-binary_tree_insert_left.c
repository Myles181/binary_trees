#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node at parent left
 * @parent: The parent of the node ot be inserted
 * @value: The value of the node
 * Return: node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (parent == NULL || node == NULL)
		return NULL;

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->left == NULL)
		parent->left = node;

	else
	{
		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
	}

	return (node);
}
