#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - This function returns 1 if the node is root
 * @parent: node to verify if is root
 * Return: 1 if the node is root or 0 if is root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}
