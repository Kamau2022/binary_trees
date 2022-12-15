#include "binary_trees.h"
#include <stdlib.h>

/**
*binary_tree_insert_right - a function that creates a binary tree node
*
*@parent:a pointer to the node to insert the right-child in
*@value: is the value to put in the new node
*
*Return: NULL or new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node;
node = malloc(sizeof(binary_tree_t));
if (node == NULL)
{
return (NULL);
}
node->n = value;
node->left = NULL;
node->right = NULL;
node->parent = parent;
if (parent->right != NULL)
{
node->right = parent->right;
node->right->parent = node;
}
parent->right = node;
return (node);
}
