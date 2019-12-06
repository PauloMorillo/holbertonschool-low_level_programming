#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
int binary_tree_balance(const binary_tree_t *tree);
/**
 * binary_tree_is_full - returns 1| if the tree is full or 0 if not
 * @tree: root of tree
 * Return: returns the balance
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (binary_tree_balance(tree) == 0)
			return (1);
	}
	return (0);
}

/**
 * binary_tree_balance - returns the balance (left - right) of the tree
 * @tree: root of tree
 * Return: returns the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
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
