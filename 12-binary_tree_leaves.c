#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts number of leaves (nodes without children
 *
 * @tree: The node to be checked
 *
 * Return: number of leaves
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	static size_t cnt;

	if (tree == NULL)
	{
		return (0);
	}
	binary_tree_leaves(tree->left);
	binary_tree_leaves(tree->right);
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		cnt++;
	}
	return (cnt);
}
