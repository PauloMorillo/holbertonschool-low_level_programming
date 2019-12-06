#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
int binary_tree_heighta(const binary_tree_t *tree);
int binary_tree_sizea(const binary_tree_t *tree);
/**
 * binary_tree_is_full - returns 1| if the tree is full or 0 if not
 * @tree: root of tree
 * Return: returns the balance
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int h = 0;
	int ful = 0;
	int h2 = 0;

	if (tree)
	{
		h = binary_tree_heighta(tree);
		while (h >= 0)
		{
			h2 = h;
			while (h2 > 0)
			{
				ful = ful + (2);
				h2 = h2 - 1;
			}
			h = h - 1;
		}
		if (ful + 1 == binary_tree_sizea(tree))
			return (1);
	}
	return (0);
}
/**
 * binary_tree_heighta - measures the height of a binary tree
 * @tree: root of tree
 * Return: returns the height of the node
 */
int binary_tree_heighta(const binary_tree_t *tree)
{
	int a = 0;
	int b = 0;
	/* int c = 0; */

	if (tree)
	{
		if (tree->left)
			a = (1 + binary_tree_heighta(tree->left));
		if (tree->right)
			b = (1 + binary_tree_heighta(tree->right));
		if (a < b)
			return (b);
		else
			return (a);
	}
	return (0);
}

/**
 * binary_tree_sizea - This function returns the size of the tree
 * @tree: root of tree
 * Return: returns the size
 */
int binary_tree_sizea(const binary_tree_t *tree)
{
	int a = 0;

	if (tree)
	{
		a = a + 1;
		if (tree->left)
		{
			a = a + (binary_tree_sizea(tree->left));
		}
		if (tree->right)
		{
			a = a + (binary_tree_sizea(tree->right));
		}
		return (a);
	}
	return (0);
}
