#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_size - This function returns the size of the tree
 * @tree: root of tree
 * Return: returns the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* int c = 0; */
	int a = 0;
	/* int b = 0; */

	if (tree)
	{
		a = a + 1;
		if (tree->left)
		{
			a = a + (binary_tree_size(tree->left));
		}
		if (tree->right)
		{
			a = a + (binary_tree_size(tree->right));
		}
		return (a);
	}
	return (0);
}
