#include "binary_trees.h"

/**
 * binary_tree_preorder - Function
 * @tree: Binary Tree
 * @func: Function pointer
 *
 * Description: Traverses the Binary Tree using the
 * preorder technique: root, then all left nodes and,
 * finally, all the right nodes. Once again, recursion
 * is preferred over a loop.
 * Return: void.
 * On error, stderr.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
