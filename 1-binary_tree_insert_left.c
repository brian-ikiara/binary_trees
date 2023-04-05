#include "binary_trees.h"

/**
 * swap_nodes - Function
 * @swpe: Swapee
 * @swpr: Swaper
 *
 * Description: Swaps 2 Binary Tree nodes.
 * Return: swpr, the new node; NULL, otherwise.
 * On error, stderr.
 */
binary_tree_t *swap_nodes(binary_tree_t *swpe, binary_tree_t *swpr)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL)
		return (NULL);
	temp = swpe, swpe = swpr, swpr = temp;

	return (swpr);
}

/**
 * binary_tree_insert_left - Function
 * @parent: Parent node
 * @value: Node data
 *
 * Description: Inserts a node to as a left child of
 * another node.
 * Return: new, the new node; NULL, otherwise.
 * On error, stderr.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = parent->left;
	new->right = NULL;
	if (parent->left != NULL)
		parent->left->parent = new;
	else
		new->left = NULL;
	parent->left = new;

	return (new);
}
