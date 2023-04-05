#include "binary_trees.h"

/**
 * binary_tree_delete - Function
 * @tree: Binary Tree
 *
 * Description: Deletes a Binary Tree. It employs the use
 * of recursion as a simple loop will nod do it for our tree.
 * Return: void.
 * On error, stderr.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
