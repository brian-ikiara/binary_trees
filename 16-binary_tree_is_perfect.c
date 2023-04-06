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
 * binary_tree_is_perfect - Function
 * @tree: Root node
 *
 * Description: Checks whether a Binary Tree is
 * perfect: a full Binary Tree with all its levels
 * completely filled.
 * Return: 1, if perfect; 0, otherwise.
 * On error, stderr.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);
	leftHeight = height_finder(tree->left) - 1;
	rightHeight = height_finder(tree->right) - 1;
	if (leftHeight != rightHeight)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	else
		return (0);
}
