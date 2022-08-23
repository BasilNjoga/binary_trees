#include <stdio.h>
#include "binary_trees.h"


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) 
{
    binary_tree_t *binary_tree_node;
    binary_tree_node = malloc(sizeof(binary_tree_t));
    binary_tree_node->parent = parent;
    binary_tree_node->n = value;

    return binary_tree_node;
}