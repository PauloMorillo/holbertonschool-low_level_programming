#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - This function prints preorder traversal a binary tree
 * @tree: root of tree
 * @func: pointer to a function to call for each node
 * Return: It doesnt return anything
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, func);
		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
