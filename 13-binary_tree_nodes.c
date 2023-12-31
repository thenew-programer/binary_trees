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
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: number of sub-trees with atleast 1 child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t r_nodes, l_nodes;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	r_nodes = binary_tree_nodes(tree->right);
	l_nodes = binary_tree_nodes(tree->left);
	return (1 + r_nodes + l_nodes);
}
