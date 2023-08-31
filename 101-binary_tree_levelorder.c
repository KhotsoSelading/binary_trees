#include "binary_trees.h"


/**
 * lo_recursive - The helper function for level-order traversal.
 *
 * @node: Current node being processed.
 * @func: Pointer to the function to call for each node's value.
 * @level: Level being processed.
 *
 * Return: Nothing
 */
void lo_recursive(const binary_tree_t *node, void (*func)(int), int level)
{
	if (node == NULL)
		return;

	if (level == 1)
	{
		func(node->n);
	}
	else if (level > 1)
	{
		lo_recursive(node->left, func, level - 1);
		lo_recursive(node->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - A function that traverses a binary
 *                          tree using level-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node's value.
 *
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int tree_height = 0, int i;

	if (tree == NULL || func == NULL)
		return;

	tree_height = binary_tree_height(tree);

	for (i = 1; i <= tree_height + 1; i++)
		lo_recursive(tree, func, i);
}
