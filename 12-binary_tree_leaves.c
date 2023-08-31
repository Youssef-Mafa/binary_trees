#include "binary_trees.h"
/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves.
 * Return: numbers of leaves in the binary tree
 */ 
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	right_count = binary_tree_leaves(tree->left);
	left_count = binary_tree_leaves(tree->right);

	return (right_count + left_count);
}
