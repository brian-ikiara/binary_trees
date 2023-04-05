#include "binary_trees.h"

/**
 * binary_tree_postorder - Function
 * @tree: Binary Tree
 * @func: Function pointer
 *
 * Description: Traverses the Binary Tree using the
 * postorder technique: root, then all left nodes and,
 * finally, all the right nodes. Once again, recursion
 * is preferred over a loop.
 * Return: void.
 * On error, stderr.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
