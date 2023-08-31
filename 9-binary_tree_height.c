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
	size_t height = 0, nodes_in_current_level;
	const binary_tree_t *temp;

	if (tree == NULL)
		return (0);

	for (nodes_in_current_level = 1; nodes_in_current_level > 0; height++)
	{
		nodes_in_current_level = 0;

		for (temp = tree; temp && nodes_in_current_level == 0;
		temp = temp->parent)
		{
			nodes_in_current_level += 1;
			if (temp->left)
				nodes_in_current_level += 1;
			if (temp->right)
				nodes_in_current_level += 1;
		}
	}

	return (height - 1);
}
