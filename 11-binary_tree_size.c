#include "binary_trees.h"
#include <stdlib.h>

/**
*binary_tree_size - a function that finds size of  a binary tree 
*
*@tree:a a pointer to the root node of the tree to measure the size
*
*Return: size of the tree
*/


size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size;
if (tree == NULL)
{
return(0);
}
size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
return (size);
}
