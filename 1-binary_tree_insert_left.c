#include "binary_trees.h"


/*
 * binary_tree_insert_left - insert a node to the left of the parent
 * node
 *
 * @parent: the node to insert a child in
 * @value: the value of the node
 * Return: return null on failure or if parent is null
 * otherwise return pointer of the node created
 */
binary_tree_t *binary_tree_insert_left(
	binary_tree_t *parent,
	int value
)
{
	if (!parent)
		return (NULL);
	binary_tree_t *node =
		(binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	parent->left = node;
	return (node);
}
