#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a given node.
 * @node: the given node.
 *
 * Return: node pointer of the uncle
 * - NULL if no uncle or given node is NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node || !node->parent)
		return (NULL);

	uncle = binary_tree_sibling(node->parent);

	uncle ? return (uncle) : return (NULL);
}
