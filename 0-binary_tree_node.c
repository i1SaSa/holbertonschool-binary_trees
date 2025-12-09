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
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
