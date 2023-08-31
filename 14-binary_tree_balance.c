#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: The balance factor of the binary tree.
 *         Alternatively, 0 if the tree is empty.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_balance, r_balance, balance_factor;

	if (tree == NULL)
		return (0);

	l_balance = binary_tree_balance(tree->left);
	if (l_balance == -1)
		return (-1);

	r_balance = binary_tree_balance(tree->right);
	if (r_balance == -1)
		return (-1);

	balance_factor = left_balance - right_balance;
	if (balance_factor < -1 || balance_factor > 1)
		return (-1);

	return (1 + (left_balance > right_balance ? left_balance : right_balance));
}
