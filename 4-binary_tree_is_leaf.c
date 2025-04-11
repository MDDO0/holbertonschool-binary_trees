#include "binary_trees.h"

/**
 * binary_tree_delete - delete an entire given tree.
 * @tree: pointer to a tree to be deleted.
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
