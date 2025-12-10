#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserst new child to right of parent
 * @parent: pointer to the parent node
 * @value: value stored in the node
 *
 * Return: is success the new node, if
 * faild NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}

	parent->right = node;
	return (node);
}
