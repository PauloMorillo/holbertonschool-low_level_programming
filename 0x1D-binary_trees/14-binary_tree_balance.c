#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
size_t binary_tree_height_noroot(const binary_tree_t *tree);
/**
 * binary_tree_balance - returns the balance (left - right) of the tree
 * @tree: root of tree
 * Return: returns the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree)
	{
		return (binary_tree_height_noroot(tree->left)
			- binary_tree_height_noroot(tree->right));
	}
	return (0);
}
/**
 * binary_tree_height_noroot - measures the height of a binary tree
 * @tree: root of tree
 * Return: returns the height of the node
 */
size_t binary_tree_height_noroot(const binary_tree_t *tree)
{
	int a = 1;
	int b = 1;
	/* int c = 0; */

	if (tree)
	{
		if (tree->left)
			a = (1 + binary_tree_height_noroot(tree->left));
		if (tree->right)
			b = (1 + binary_tree_height_noroot(tree->right));
		if (a < b)
			return (b);
		else
			return (a);
	}
	return (0);
}
