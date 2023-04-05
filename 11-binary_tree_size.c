#include "binary_trees.h"

/**
 * binary_tree_size - Function
 * @tree: Root node
 *
 * Description: Measures the size of a Binary Tree.
 * Again, using the recursive strategy.
 * Return: the size of the tree.
 * On error, stderr.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftSize = 0, rightSize = 0;

	if (tree == NULL)
		return (0);
	leftSize = binary_tree_size(tree->left);
	rightSize = binary_tree_size(tree->right);

	return (1 + leftSize + rightSize);
}
