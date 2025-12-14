#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * height - gets tree height
 */
int height(const binary_tree_t *tree)
{
if (!tree || (!tree->left && !tree->right))
return (0);
return (1 + height(tree->left));
}
/**
 * perfect - checks perfection
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
 * binary_tree_is_perfect - checks if tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (!tree)
return (0);
return (perfect(tree, height(tree), 0));
}
