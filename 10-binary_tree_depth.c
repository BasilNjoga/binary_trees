#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - this function gives the height of a tree
 *
 * @tree: node of the treee to be returned
 *
 * Return: Height of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left;
	size_t right;
	size_t d;

	if (tree == NULL)
	{
		return (0);
	}
	
	left = binary_tree_depth(tree->left);
	right = binary_tree_depth(tree->right);
	if (left > right)
	{
		d = 1 + left;
	}
	else
	{
		d = 1 + right;
	}
	return d;
}
