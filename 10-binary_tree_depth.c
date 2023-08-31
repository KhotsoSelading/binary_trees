#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth
 *                     of a node in a binary tree.
 *
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: The depth of the node.
 *         Alternatively, 0 if the node is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	for (depth = 0; tree->parent != NULL; depth++)
		tree = tree->parent;

	return (depth);
}
