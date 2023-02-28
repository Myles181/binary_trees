#include "binary_trees.h"

/**
 * binary_tree_delete - To delete a tree
 * @tree: The root of the tree to be deleted
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree){
		free(tree->left);
		free(tree->right);
		free(tree);
	}
}
