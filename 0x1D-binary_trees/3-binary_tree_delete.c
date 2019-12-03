#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - This function deletes a binary tree
 * @tree: root of tree
 * Return: It doesnt return anything
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left)
			binary_tree_delete(tree->left);
		if (tree->right)
			binary_tree_delete(tree->right);
		free(tree);

	}
}
