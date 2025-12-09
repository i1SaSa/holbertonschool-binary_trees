#include "binary_trees.h"
/**
 * binary_tree_node - create a tree
 * @parent: pointer to the parent
 * @value: value of the node
 * 
 * Return: pointer to the root
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	root = malloc(sizeof(binary_tree_t));
	if (!root)
		return (NULL);

	parent = root;
	root->n = value;
	return (root);
}