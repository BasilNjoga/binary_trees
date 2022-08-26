#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - calculates the balance factor of the tree
 *
 * @tree: The tree to be measured
 *
 * Return: Nothing
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
	{
		return (0);
	}
	tree = tree->left;
	left = binary_tree_balance(tree->left);
	right = binary_tree_balance(tree->right);
	if (left > right)
	{
		h = 1 + left;
	}
	else
	{
		h = 1 + right;
	}

	tree = tree->right;

	
