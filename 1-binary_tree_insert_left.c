#include "binary_trees.h"
#include <stdlib.h>

/**
*binary_tree_insert_left - a function that creates a binary tree node
*
*@parent:a pointer to the node to insert the left-child in
*@value: is the value to put in the new node
*
*Return: NULL or new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
if (parent->left != NULL)
{
node->left = parent->left;
node->left->parent = node;
parent->left = node;
return (node);
}
node->left = parent->left;
parent->left = node;
return (node);
}
