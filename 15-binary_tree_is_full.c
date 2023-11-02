#include "binary_trees.h"
#define SUCCESS 1
#define FAILURE 0


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
 * binary_tree_is_full - checks if a binary tree is full
 *
 * Full means a tree where every node has either zero or two children
 *
 * @tree: pointer to the root node of a binary tree
 *
 * Return: 0 on failure 1 on success
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (FAILURE);
	if (binary_tree_is_leaf(tree))
		return (SUCCESS);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (!left || !right)
		return (FAILURE);
	return (SUCCESS);
}
