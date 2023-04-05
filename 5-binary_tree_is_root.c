#include "binary_trees.h"

/**
 * binary_tree_is_root - Function
 * @node: Binary Tree node
 *
 * Description: Checks whether a Binary Tree node is the
 * root node.
 * Return: 1, if it is the root; 0, otherwise.
 * On error, stderr.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
