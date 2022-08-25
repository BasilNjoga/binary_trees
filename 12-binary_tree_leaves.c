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
	size_t cnt;
	size_t left;
	size_t right;
	
	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		cnt = left + right + 1;
	}
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (cnt);
}
