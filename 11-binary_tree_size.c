#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - this function gives the height of a tree
 *
 * @tree: node of the treee to be returned
 *
 * Return: Height of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left;
	size_t right;
	size_t h;

	if (tree == NULL)
	{
		return (0);
	}

	binary_tree_size(tree->left);
	binary_tree_size(tree->right);
	h++;
	
	return h;
	
}
