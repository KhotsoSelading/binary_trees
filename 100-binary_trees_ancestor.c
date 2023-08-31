#include "binary_trees.h"

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
	binary_tree_t *l_lca, *r_lca;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	l_lca = binary_trees_ancestor(first, second->parent);
	r_lca = binary_trees_ancestor(first->parent, second);

	if (l_lca != NULL && r_lca != NULL)
		return ((binary_tree_t *)first);

	return ((l_lca != NULL) ? l_lca : r_lca);
}
