#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - This function measures the height of a binary tree
 * @tree: root of tree
 * Return: It doesnt return anything
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree)
	{
		if (tree->left)
			binary_tree_height(tree->left);
		if (tree->right)
			binary_tree_height(tree->right);

	}
	return (0);
}
