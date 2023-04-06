#include "binary_trees.h"

/**
 * binary_tree_is_full - Function
 * @tree: Root node
 *
 * Description: Checks whether a Binary Tree is
 * full i.e. all non-leaf nodes have exactly 2
 * children and all leaf nodes are on the same
 * level, exactly.
 * Return: 1, if it's full; 0, otherwise.
 * On error, stderr.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	else
		return (0);
}
