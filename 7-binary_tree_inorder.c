#include "binary_trees.h"


/**
* binary_tree_inorder - traverse a tree in inorder
* which means, left first, then root, then right
*
* @tree: pointer to the root of the tree
* @func: pointer to function to call for each node
*
* Return: nothing
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}
