#include "binary_trees.h"

/**
 * binary_tree_delete - delete an entire given tree.
 * @tree: pointer to a tree to be deleted.
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	free(tree);
}
