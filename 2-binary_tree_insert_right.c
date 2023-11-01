#include "binary_trees.h"


/*
 * binary_tree_insert_right - insert a node to the right of the parent
 * node
 *
 * @parent: the node to insert a child in
 * @value: the value of the node
 * Return: return null on failure or if parent is null
 * otherwise return pointer of the node created
 */
binary_tree_t *binary_tree_insert_right(
	binary_tree_t *parent,
	int value
)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node =
		(binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->right = NULL;
	node->right = NULL;
	if (!parent->right)
		parent->right = node;
	else
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}
	return (node);
}
