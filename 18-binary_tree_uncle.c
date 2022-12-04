#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: node to be checked
 *
 * Return: sibing of the node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent == node->parent->parent->right)
	{
		if (node->parent->parent->left)
		{
			uncle = node->parent->parent->left;
		}
		else
		{
			return (NULL);
		}
	}

	if (node->parent == node->parent->parent->left)
	{
		if (node->parent->parent->right)
		{
			uncle = node->parent->parent->right;
		}
		else
		{
			return (NULL);
		}
	}
	return (uncle);
}
