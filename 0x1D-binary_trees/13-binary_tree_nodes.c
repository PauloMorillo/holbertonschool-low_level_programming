#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_nodes - returns the nodes with at least one child
 * @tree: root of tree
 * Return: returns the nodes of a treee
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size;
	size_t leaves;

	if (tree)
	{
		size = binary_tree_size(tree);
		leaves = binary_tree_leaves(tree);
		return (size - leaves);
	}
	return (0);
}

/**
 * binary_tree_leaves - returns the leaves (final nodes) of the tree
 * @tree: root of tree
 * Return: returns the leaves of a tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int a = 0;

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

/**
 * binary_tree_size - This function returns the size of the tree
 * @tree: root of tree
 * Return: returns the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int a = 0;

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
