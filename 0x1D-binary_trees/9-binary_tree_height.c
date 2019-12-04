#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_height - This function measures the height of a binary tree
 * @tree: root of tree
 * Return: returns the height of the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int a = 0;
	int b = 0;
	/* int c = 0; */

	if (tree)
	{
		if (tree->left)
		{
			printf("left%d\n%d\n", tree->n, a);
			a = (1 + binary_tree_height(tree->left));
		}
		if (tree->right)
		{
			printf("right%d\n%d\n", tree->n, b);
			b = (1 + binary_tree_height(tree->right));
		}
		if (a < b)
			return (b);
		else
			return (a);
		return (0);
	}
	return (0);
}
