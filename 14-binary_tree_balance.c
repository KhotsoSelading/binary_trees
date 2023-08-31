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
	int l_height, r_height;

	if (tree == NULL)
		return 0;

	l_height = binary_tree_balance(tree->left);
	r_height = binary_tree_balance(tree->right);

	return (l_height - r_height);
}
