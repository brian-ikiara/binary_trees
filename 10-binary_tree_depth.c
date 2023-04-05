#include "binary_trees.h"

/**
 * depth_finder - Function
 * @tree: Root node
 *
 * Description: Using the recursive strategy, the preloaded
 * depth of the Binary Tree is determined.
 * Return: the preloaded tree depth.
 * On error, stderr.
 */
size_t depth_finder(const binary_tree_t *tree)
{
	size_t parentHeight = 0;

	if (tree == NULL)
		return (0);
	parentHeight = depth_finder(tree->parent);

	return (parentHeight + 1);
}

/**
 * binary_tree_depth - Function
 * @tree: Root node
 *
 * Description: Determines the depth of the Binary Tree;
 * this is the number of edges between the node and root node.
 * We shall be using recursion.
 * Return: the depth of the tree.
 * On error, stderr.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (depth_finder(tree) - 1);
}
