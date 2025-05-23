#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * This function allocates a new node in memory,
 * sets its value and parent, and initializes its children to NULL.
 *
 * @parent: A pointer to the parent node
 * @value: The value to assign to the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
