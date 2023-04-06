#include "binary_trees.h"

/**
 * binary_tree_sibling - Function
 * @node: Binary Tree node
 *
 * Description: Returns a Binary Tree node's sibling
 * i.e. a node that shares a parent with another.
 * Return: the sibling of a node; NULL, otherwise.
 * On error, stderr.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
