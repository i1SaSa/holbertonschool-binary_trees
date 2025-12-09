#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserst new child to left of parent
 * @parent: pointer to the parent node
 * @value: value stored in the node
 *
 * Return: is success the new node, if
 * faild NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
	{
		return (NULL);
	}

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}

	parent->left = node;
	return (node);
}
