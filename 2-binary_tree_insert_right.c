#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - this function inserts a node as a right-child
 *
 * @parent: This is the parent node
 *
 * @value: This is the value to be inserted
 *
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode;
	int temp;

	if (parent == NULL)
	{
		return (NULL);
	}
	rightnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (rightnode == NULL)
	{
		return (NULL);
	}

	if (parent->right == NULL)
	{
		parent->right = rightnode;
		rightnode->n = value;
		rightnode->parent = parent;
		rightnode->left = NULL;
		rightnode->right = NULL;
	}
	else
	{
		temp = parent->right->n;
		parent->right->n = value;
		parent->right->right = rightnode;
		rightnode->n = temp;
		rightnode->parent = parent->right;
		rightnode->left = NULL;
		rightnode->right = NULL;
	}


	return (rightnode);
}
