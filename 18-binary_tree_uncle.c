#include "binary_trees.h"


/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer of the uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent->parent)
		return (NULL);

	parent = node->parent->parent;
	if (!parent->left || !parent->right)
		return (NULL);
	if (parent->left->left == node || parent->left->right == node)
		return (parent->right);
	else
		return (parent->left);
}
