#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_leaves - returns the leaves (final nodes) of the tree
 * @tree: root of tree
 * Return: returns the leaves of a tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* int c = 0; */
	int a = 0;
	/* int b = 0; */

	if (tree)
	{
		if (tree->left)
		{
			a = a + (binary_tree_leaves(tree->left));
		}
		if (tree->right)
		{
			a = a + (binary_tree_leaves(tree->right));
		}
		if (tree->left == NULL && tree->right == NULL)
			a = a + 1;
		return (a);
	}
	return (0);
}
