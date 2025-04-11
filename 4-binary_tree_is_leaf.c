#include "binary_trees.h"

/**
 * binary_tree_is_leaf - receives binary tree node, and checks if it's a leaf.
 * @node: a pointer to a binary tree node.
 *
 * Return: 1 if the node is a leaf - 0 otherwise or if node is NULL.
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->left && !node->right)
			return (1);
		return (0);
	}
	return (0);
}
