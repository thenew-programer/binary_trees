#include "binary_trees.h"



/**
 * binary_tree_is_leaf - check whether a node is a leaf or not
 *
 * @node: pointer to the node to check
 *
 * Return: 1 on success 0 on failure
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of a tree
 *
 * Return: the length of type size_t
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_length, r_length;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	l_length = binary_tree_height(tree->left);
	r_length = binary_tree_height(tree->right);
	return (l_length >= r_length ? ++l_length : ++r_length);
}
