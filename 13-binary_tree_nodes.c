#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 *
 * Return: number of nodes with at least 1 child
 *         0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;
if (!tree)
return (0);
if (tree->left || tree->right)
count = 1;
count += binary_tree_nodes(tree->left);
count += binary_tree_nodes(tree->right);
return (count);
}
