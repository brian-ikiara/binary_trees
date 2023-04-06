#include "binary_trees.h"

/**
 * binary_tree_uncle - Function
 * @node: Binary Tree node
 *
 * Description: Returns the uncle to a node of a
 * Binary Tree i.e. the sibling to the parent of
 * a node.
 * Return: the uncle of the node; NULL, otherwise.
 * On error, stderr.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);

	return (NULL);
}
