#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
int binary_tree_height(const binary_tree_t *tree)
{
int left_height, right_height;
if (!tree)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
if (left_height > right_height)
return (left_height + 1);
return (right_height + 1);
}
/**
 * binary_tree_balance - measures the balance factor of a node
 * @tree: pointer to the node
 *
 * Return: balance factor (left subtree height - right subtree height)
 *         0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (!tree)
return (0);
return (binary_tree_height(tree->left) -
binary_tree_height(tree->right));
}
