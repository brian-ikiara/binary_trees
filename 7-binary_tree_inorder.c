#include "binary_trees.h"

/**
 * binary_tree_inorder - Function
 * @tree: Binary Tree
 * @func: Function pointer
 *
 * Description: Traverses the Binary Tree using the
 * inorder technique: all left nodes, then root and,
 * finally, all the right nodes. Once again, recursion
 * is preferred over a loop.
 * Return: void.
 * On error, stderr.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
