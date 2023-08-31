#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: Height of the binary tree
 *         Alternatively, 0 if the tree is empty.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree != NULL)
	{
		l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l_height > r_height) ? l_height : r_height);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - A function that checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the binary tree is perfect.
 *         Alternatively, 0 if not perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height 0;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height == rt_height)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}

		return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
	}

	return (0);
}
