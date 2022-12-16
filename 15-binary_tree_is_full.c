#include "binary_trees.h"
#include <stdlib.h>

/**
*binary_tree_is_full - a function that finds whether a binary tree is full
*
*@tree:a a pointer to the root node to check
*
*Return: 0 or 1
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
if ((tree->left != NULL) && (tree->right != NULL))
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
else
return (0);
}
