#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include "binary_trees.h"
/**
 * height - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 */
int height(const binary_tree_t *tree)
{
if (!tree || (!tree->left && !tree->right))
return (0);
return (1 + height(tree->left));
}
/**
 * perfect - checks if a binary tree is perfect
 * @tree: pointer to current node
 * @h: height of the tree
 * @lvl: current level
 *
 * Return: 1 if perfect, otherwise 0
 */
int perfect(const binary_tree_t *tree, int h, int lvl)
{
if (!tree)
return (1);
if (!tree->left && !tree->right)
return (h == lvl);
if (!tree->left || !tree->right)
return (0);
return (perfect(tree->left, h, lvl + 1) &&
perfect(tree->right, h, lvl + 1));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (!tree)
return (0);
return (perfect(tree, height(tree), 0));
}
