#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - This goes through a tree using post-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * @func: pointer to a function to be called for each node
 *
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
	{
		exit(0);
	}
	if (tree == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
