#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_balance - returns the balance (left - right) of the tree
 * @tree: root of tree
 * Return: returns the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/* int c = 0; */
	int l = -1;
	int r = -1;

	if (tree)
	{
		if (tree->left)
		{
			l = (binary_tree_balance(tree->left));
		}
		if (tree->right)
		{
			r = (binary_tree_balance(tree->right));
		}
		return (l - r);
	}
	return (0);
}
