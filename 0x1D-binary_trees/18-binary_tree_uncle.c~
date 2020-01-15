#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_sibling - This function returns a pointer to the sibling
 * @node: node of a tree
 * Return: returns the sibling or null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node)
	{
		if (node->parent)
		{
			if (node->parent->right && node->parent->left)
			{
				if (node->parent->right->n == node->n)
					return (node->parent->left);
				else
					return (node->parent->right);
			}
		}
	}
	return (NULL);
}
