#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - This function returns 1 if the node has children
 * @parent: node to verify if has a children
 * Return: 1 if the node has children or 0 if has not children
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
	}
	return (0);
}
