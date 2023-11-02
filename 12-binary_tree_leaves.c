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
 * binary_tree_leaves - return how many leaves in a binary tree
 *
 * @tree: pointer to the tree
 *
 * Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
