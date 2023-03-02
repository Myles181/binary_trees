#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 *@tree: pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 1, right = 1;

		if (tree->right)
			right +=  binary_tree_height(tree->right);
		if (tree->left)
			left +=  binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
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
/**
 * binary_tree_is_perfect - Finds a perfect tree
 * Perfect tree is one that has every level has max number of nodes possible
 * perfect_tree = (2^h) - 1 or (1 << h) - 1
 * @tree: Pointer to the node tree
 * Return: 1 or 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, nodes = 0;

	if (!tree)
		return (0);

	if (!binary_tree_size(tree))
		return (0);

	/*height of tree */
	height = binary_tree_height(tree);

	/* find number of total nodes */

	nodes = (1 << height) - 1;

	/**
	 * if height = 3
	 * (2^3) - 1 = 7 nodes
	 * Exactly 7 nodes to make a perfect tree of height 3
	 */

	if (binary_tree_size(tree) == nodes)
		return (1);

	return (0);
}
