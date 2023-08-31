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


/**
 * binary_trees_ancestor - A function that finds the lowest
 *                         common ancestor of two nodes.
 *
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: A pointer to the LCA node.
 *         Alternatively, NULL if no common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	int depth_first = 0, depth_second =;

	if (first == NULL || second == NULL)
		return NULL;

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	for (; depth_first > depth_second; depth_first--)
		first = first->parent;

	for (; depth_second > depth_first; depth_second--)
		second = second->parent;

	for (; first != second; first = first->parent, second = second->parent)
	{
	}

	return (binary_tree_t *)first;
}
