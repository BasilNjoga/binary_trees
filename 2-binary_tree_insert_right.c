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

	rightnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (parent == NULL) 
	{
		return (NULL);
	}
	else if (rightnode == NULL)
	{
		return (NULL);
	}
	parent->left = rightnode;
	rightnode->n = value;
	rightnode->parent = parent;

	return (rightnode);
}
