#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - This function prints inorder traversal a binary tree
 * @tree: root of tree
 * @func: pointer to a function to call for each node
 * Return: It doesnt return anything
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
			binary_tree_inorder(tree->left, func);
		func(tree->n);
		if (tree->right)
			binary_tree_inorder(tree->right, func);
	}
}
