#include "binary_trees.h"


/**
* binary_tree_is_root - check whether a node is the root node
* or not
*
* @node: pointer to the node to check
*
* Return: 0 on failure 1 on success
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
