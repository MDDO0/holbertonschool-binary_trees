#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the silbling of a given node.
 * @node: the given node.
 *
 * Return: node pointer of the sibling
 * - NULL if no sibling or given node is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->right || !node->parent->left)
		return (NULL);
	else if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}
