#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - goies through a binary tree using preorder traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 *
 * @func: a function to call for each node
 *
 * Return nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *traverse;

	traverse = tree;
	if ((tree == NULL) || (func == NULL))
	{
		exit(0);
	}
	if parent == NULL
		func(tree);
	binary_tree_preorder(tree,
}

