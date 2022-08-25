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

size_t cnt = 0;
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	cnt = 0;
	if (tree)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			cnt++;
		}
		else
		{
			if (tree->left)
				binary_tree_leaves(tree->left);
			if (tree->right)
				binary_tree_leaves(tree->right);
		}
	return (cnt);
	}
	else
	{
		return (0);
	}
}
