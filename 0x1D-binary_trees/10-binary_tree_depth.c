#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - This function measures the height of a binary tree
 * @tree: root of tree
 * Return: It doesnt return anything
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* int a = 0; */
	/* int b = 0; */

	if (tree)
	{
		if (tree->parent)
			return (1 + binary_tree_depth(tree->parent));
		else
			return (0);

	}
	return (0);
}
