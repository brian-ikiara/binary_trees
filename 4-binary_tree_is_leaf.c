#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function
 * @node: Binary Tree node
 *
 * Description: Checks if node of Binary Tree is a
 * leaf node.
 * Return: 1, if node is leaf; o, otherwise.
 * On error, stderr.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
