#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function
 * @parent: Parent node
 * @value: Node data
 *
 * Description: Inserts a node to as a left child of
 * another node.
 * Return: newLeft, the new node; NULL, otherwise.
 * On error, stderr.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newLeft = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	if (newLeft == NULL)
		return (NULL);
	newLeft = binary_tree_node(parent, value);
	if (parent->left == NULL)
		parent->left = newLeft;
	else
	{
		newLeft->left = parent->left;
		parent->left = newLeft;
		newLeft->left->parent = newLeft;
	}

	return (newLeft);
}
