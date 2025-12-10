#include "binary_trees.h"
/**
 * binary_tree_delete - delete a binary tree
 * @tree: pointer to the tree
 * 
 * Return: nothing (void)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	free(tree);

}
