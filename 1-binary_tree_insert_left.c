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
	int temp;

	if (parent == NULL)
	{
		return (NULL);
	}
	leftnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (leftnode == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = leftnode;
		parent->right = NULL;
		leftnode->n = value;
		leftnode->parent = parent;
		leftnode->left = NULL;
		leftnode->right = NULL;
	}
	else
	{
		temp = parent->left->n;
		parent->left->n = value;
		parent->left->left = leftnode;
		parent->left->right = NULL;
		leftnode->n = temp;
		leftnode->parent = parent->left;
		leftnode->left = NULL;
		leftnode->right = NULL;
	}


	return (leftnode);
}
