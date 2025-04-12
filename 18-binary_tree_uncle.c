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

	if (uncle)
		return (uncle);
	return (NULL);
}
