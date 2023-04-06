#include "binary_trees.h"

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
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return (leftHeight - rightHeight);
}
