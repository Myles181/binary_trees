#include "binary_trees.h"

/**
 * binary_tree_preorder - Preorder Traversal
 * @tree: pointer to the node
 * @func: 
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func != NULL && tree != NULL)
	{
		/* Obtain Values */
		func(tree->n);
		/* Traverse left */
		binary_tree_preorder(tree->left, func);
		/*Traverse right*/
		binary_tree_preorder(tree->right, func);
	}
}
