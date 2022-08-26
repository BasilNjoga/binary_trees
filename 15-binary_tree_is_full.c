#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: binary tree to be checked
 *
 * Return: nothing
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int n;

	if (tree == NULL)
	{
		return (0);
	}
	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		n = 1;
	}
	else if ((tree->left != NULL) && (tree->right != NULL))
	{
		n = 1;
	}
	else
	{
		n = 0;
	}
	return (n);
}
