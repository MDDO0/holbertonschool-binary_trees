#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses through a given node,
 * using pre-order traversal.
 * @tree: the tree to be traversed.
 * @func: a function pointer to pass every value of all traversed nodes.
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, (*func)(int));
	if (tree->right)
		binary_tree_preorder(tree->right, (*func)(int));
}
