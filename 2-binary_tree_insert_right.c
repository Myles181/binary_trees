#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a binary tree at parent right
 * @parent: Parent of node to be inserted
 * @value: value of node
 * Return: node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (parent == NULL || node == NULL)
	{
		return NULL;
	}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->right == NULL)
		parent->right = node;
	else
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}

	return (node);
}
