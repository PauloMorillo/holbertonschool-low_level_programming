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
			if (node->parent->right->n == node->n)
			{
				if (node->parent->left)
					return (node->parent->left);
				else
					return (NULL);
			}
			else
			{
				if (node->parent->right)
					return (node->parent->right);
			}
		}
	}
	return (NULL);
}
