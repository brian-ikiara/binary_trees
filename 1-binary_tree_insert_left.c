#include "binary_trees.h"

/**
 * binary_tree_swap - Function
 * @swpe: Swapee
 * @swpr: Swaper
 *
 * Description: Swaps two node.
 * Return: swpe, the swaped node; NULL, otherwise.
 * On error, stderr.
 */
binary_tree_t *binary_tree_swap(binary_tree_t *swpe, binary_tree_t *swpr)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL)
		return (NULL);
	temp = swpe;
	swpe = swpr;
	swpr = temp;
	free(temp);

	return (swpr);
}

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

	if (newLeft == NULL || parent == NULL)
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
