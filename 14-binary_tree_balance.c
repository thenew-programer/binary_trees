#include "binary_trees.h"



#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 *
 * Return: the height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}


/**
 * binary_tree_balance - measure the balance factor the given tree
 *
 * Description: balance factor = height of left sub-tree -
 * height of right sub-tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: the balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int r_height, l_height;

	if (!tree)
		return (0);
	r_height = binary_tree_height(tree->right);
	l_height = binary_tree_height(tree->left);

	return (l_height - r_height);
}
