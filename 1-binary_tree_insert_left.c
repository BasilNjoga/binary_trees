#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - this function inserts a node as a left-child
 *
 * @parent: This is the parent node
 *
 * @value: This is the value to be inserted
 *
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;

	leftnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (parent == NULL) or (leftnode == NULL)
	{
		return (NULL);
	}
	parent->left = leftnode;
	leftnode->n = value;
	leftnode->parent = parent;

	return (leftnode);
}
