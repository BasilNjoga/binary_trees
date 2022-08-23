#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node: This is a function that creates a binary tree
 * 
 * @parent: This is a pointer to the parent of the node created
 * @value: This is the integer value to be stored in the funciton
 * 
 * Return: binary_tree_t* 
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) 
{
    binary_tree_t *binary_tree_node;
    binary_tree_node = (binary_tree_t*) malloc(sizeof(binary_tree_t));
    binary_tree_node->parent =  parent;
    binary_tree_node->n = value;

    return binary_tree_node;
}