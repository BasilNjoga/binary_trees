#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: node to be checked
 *
 * Return: sibing of the node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}
	if (node == node->parent->right)
	{
		if (node->parent->left)
		{
			sibling = node->parent->left;
		}
		else
		{
			return (NULL);
		}
	}

	if (node == node->parent->left)
	{
		if (node->parent->right)
		{
			sibling = node->parent->right;
		}
		else
		{
			return (NULL);
		}
	}
	return (sibling);
}
