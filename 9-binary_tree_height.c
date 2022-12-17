#include "binary_trees.h"
#include <stdlib.h>

/**
*binary_tree_height - a function that finds size of  a binary tree
*
*@tree:a a pointer to the root node of the tree to measure the height
*
*Return: height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t right_height, left_height;
right_height = 0;
left_height = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left)
left_height += binary_tree_height(tree->left) + 1;
if (tree->right)
right_height += binary_tree_height(tree->right) + 1;
if (right_height >= left_height)
return (right_height);
else
return (left_height);
}
