#include "binary_trees.h"


/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: pointer to the tree to measure
 *
 * Return: depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	binary_tree_t *tmp;

	if (!tree || !tree->parent)
		return (0);

	depth = 0;
	tmp = tree->parent;
	while (tmp)
	{
		depth++;
		tmp = tmp->parent;
	}
	return (depth);
}
