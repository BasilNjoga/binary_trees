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
	size_t upcount;
	size_t d;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent == NULL)
	{
		return (0);
	}
	upcount = binary_tree_depth(tree->parent);
	d = upcount + 1;
	return (d);
}
