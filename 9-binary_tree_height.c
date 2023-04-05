#include "binary_trees.h"

/**
 * is_max - Function
 * @val1: First value
 * @val2: Second value
 *
 * Description: Determines the maximum value.
 * Return: the maximum of the 2 values; 0, otherwise.
 * On error, stderr.
 */
size_t is_max(size_t val1, size_t val2)
{
	if (val1 == val2)
		return (0);
	if (val1 > val2)
		return (val1);
	else
		return (val2);
}

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
 * binary_tree_height - Function
 * @tree: Root node
 *
 * Description: Determines the height/maximum depth
 * of a Binary Tree. Again, recusrsion is key.
 * Return: h, the height of the tree; 0, otherwise.
 * On error, stderr.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height_finder(tree) - 1);
}
