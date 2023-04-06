#include "binary_trees.h"

/**
 * binary_tree_nodes - Function
 * @tree: Root node
 *
 * Description: Counts the number of nodes with at
 * least 1 child in a Binary Tree.
 * Return: the number of "fertile" nodes?
 * On error, stderr.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));
	else
		return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));
}
