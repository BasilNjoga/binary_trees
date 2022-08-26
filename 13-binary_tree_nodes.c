#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts number of nodes not leaf nodes
 *
 * @tree: Tree to be counted
 *
 * Return: Nothing
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	static size_t n;

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left != NULL) || (tree->right != NULL))
	{
		n++;
	}
	binary_tree_nodes(tree->left);
	binary_tree_nodes(tree->right);
	return (n);
}
