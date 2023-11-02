#include "binary_trees.h"


/**
* binary_tree_postorder - traverse a tree in postorder
* which means, left first, then right, then root
*
* @tree: pointer to the root of the tree
* @func: pointer to function to call for each node
*
* Return: nothing
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
