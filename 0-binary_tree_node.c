#include "binary_trees.h"

/**
 * binary_tree_node - Function
 * @parent: Parent node
 * @value: Node data
 *
 * Description: Creates a Binary Tree node. It will
 * contain both the left and right children.
 * Return: new, the new node; NULL, otherwise.
 * On error, stderr.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->n = value, new->parent = parent, new->left = NULL, new->right = NULL;

	return (new);
}
