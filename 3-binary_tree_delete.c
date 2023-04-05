#include "binary_trees.h"

/**
 * binary_tree_delete - Function
 * @tree: Binary Tree
 *
 * Description: Deletes a Binary Tree.
 * Return: void.
 * On error, stderr.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->parent == NULL)
	{
		while (tree->left)
		{
			free(tree->left);
			tree->left = tree->left->left;
		}
		while (tree->right)
		{
			free(tree->right);
			tree->right = tree->right->right;
		}
	}
	free(tree->parent);
}
