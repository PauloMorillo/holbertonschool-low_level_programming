#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_uncle - This function returns a pointer to the uncle
 * @node: node of a tree
 * Return: returns the uncle or null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node)
	{
		if (node->parent)
		{
			node = node->parent;
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
	}
	return (NULL);
}
