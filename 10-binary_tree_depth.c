#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: depth of binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t debth;

	debth = -1;

	if (tree->parent == NULL || tree == NULL)
		return (0);

	debth = binary_tree_depth(tree->parent) + 1;

	return (debth);
}
