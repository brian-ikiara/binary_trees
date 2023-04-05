#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function
 * @parent: Parent node
 * @value: Node data
 *
 * Description: Inserts a node to, as a right child of,
 * another node.
 * Return: new, the new node; NULL, otherwise.
 * On error, stderr.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->parent = parent, new->n = value, new->left = NULL;
	if (parent == NULL)
	{
		new->right = NULL;
		return (NULL);
	}
	if (parent->right != NULL)
		new->right = parent->right, parent->right->parent = new;
	else
		new->right = NULL;
	parent->right = new;

	return (new);

}
