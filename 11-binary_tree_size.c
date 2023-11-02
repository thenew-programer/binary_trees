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
 * binary_tree_size - measure the size of a binary tree
 *
 * @tree: pointer to the tree to measure
 *
 * Return: size of binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size, r_size;

	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);

	return (l_size + r_size + 1);
}
