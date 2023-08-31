#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: counts of the nodes with at least 1 child in a binary tree.
 * If tree is NULL, return 0.
 * A NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t number_nd = 0;

	if (tree == NULL)
	{
		return (0);
	}

	else if (tree->left || tree->right)
	{
		number_nd = (binary_tree_nodes(tree->left) + 1 +
					binary_tree_nodes(tree->right));
	}

	return (number_nd);
}
