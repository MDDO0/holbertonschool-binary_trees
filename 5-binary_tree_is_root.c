#include "binary_trees.h"

/**
 * binary_tree_is_root - receives binary tree node, and checks if it's a root.
 * @node: a pointer to a binary tree node.
 *
 * Return: 1 if the node is a root - 0 otherwise or if node is NULL.
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->parent)
			return (1);
		return (0);
	}
	return (0);
}
