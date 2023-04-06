#include "binary_trees.h"

/**
 * height_finder - Function
 * @tree: Root node
 *
 * Description: Using the recursive strategy to preload the
 * binary tree height.
 * Return: the preloaded height.
 * On error, stderr.
 */
size_t height_finder(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);
	leftHeight = height_finder(tree->left);
	rightHeight = height_finder(tree->right);

	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	else
		return (rightHeight + 1);
}

/**
 * binary_tree_balance - Function
 * @tree: Root node
 *
 * Description: Determines the balance factor of
 * a Binary Tree. We'll be using recursion.
 * Return: the balance factor.
 * On error, stderr.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);
	leftHeight = height_finder(tree->left) - 1;
	rightHeight = height_finder(tree->right) - 1;

	return (leftHeight - rightHeight);
}
