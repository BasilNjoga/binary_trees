#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - this function gives the height of a tree
 *
 * @tree: node of the treee to be returned
 *
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;
	size_t h;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
	{
		h = 1 + left;
	}
	else
	{
		h = 1 + right;
	}
	return (h);
}
