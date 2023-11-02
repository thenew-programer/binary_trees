#include "binary_trees.h"


/**
* binary_tree_preorder - traverse a tree in preorder
* which means, root node first, then left, then right
*
* @tree: pointer to the root of the tree
* @func: pointer to function to call for each node
*
* Return: nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
