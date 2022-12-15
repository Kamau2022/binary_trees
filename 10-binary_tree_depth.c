#include "binary_trees.h"
#include <stdlib.h>

/**
*binary_tree_depth - a function that finds depth of  a binary tree
*
*@tree:a a pointer to the root node of the tree to measure the depth
*
*Return: depth of the tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t right_depth, left_depth;
right_depth = 0;
left_depth = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL)
right_depth += binary_tree_depth(tree->right) + 1;
if (tree->right)
left_depth += binary_tree_depth(tree->left) + 1;
if (right_depth >= left_depth)
return (right_depth);
else
return (right_depth);
}
