#include "binary_trees.h"

/**
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = parent;
	node->right = binary_tree_node(parent, value);

	return (node->right);
}
