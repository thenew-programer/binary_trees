#include "binary_trees.h"
#include <stdlib.h>


/**
* binary_tree_node - creates a binary_tree node
*
* @parent: pointer of the parent node of the node to create
* @value: value to put in the new node
* Return: pointer to new node created Or NULL in failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node =
		(binary_tree_t *)malloc(sizeof(binary_tree_t));
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;
	if (!parent->left)
		parent->left = node;
	else
		parent->right = node;
	return (node);
}
