#include "Binary_Trees.h"

/**
 * binary_tree_is_root - A function checks if a given node is a root.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a root, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL|| node == NULL)
		return (0);

	return (1);
}
