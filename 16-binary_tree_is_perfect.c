#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: The height of the binary tree.
 *         Alternatively, 0 if the tree is empty.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return (1 + (l_height > r_height ? l_height : r_height));
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
