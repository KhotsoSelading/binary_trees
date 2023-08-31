#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure.
 *
 *
 * Return: The balance factor of the binary tree.
 *         Alternatively, 0 if the tree is empty.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (tree == NULL)
		return (0);

	l_height = (int)binary_tree_height(tree->left);
	r_height = (int)binary_tree_height(tree->right);

	return (l_height - r_height);
}
