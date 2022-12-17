#include "binary_trees.h"
#include <stdlib.h>

/**
*binary_tree_balance - a function that measures the
*balance factor of a binary tree
*
*@tree:a a pointer to the root node of the tree to measure the height
*
*Return: balance factor or 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
int right_height, left_height, b;
right_height = 0;
left_height = 0;
if (tree == NULL)
{
return (0);
}
if (tree->right)
right_height += binary_tree_balance(tree->right) + 1;
if (tree->left)
left_height += binary_tree_balance(tree->left) + 1;
b = left_height - right_height;
return (b);
}
