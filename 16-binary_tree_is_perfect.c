#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is full
 *
 * @tree: binary tree to be checked
 *
 * Return: nothing
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int n;

	if (tree == NULL)
	{
		return (0);
	}
	binary_tree_is_perfect(tree->left);
	binary_tree_is_perfect(tree->right);
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}
