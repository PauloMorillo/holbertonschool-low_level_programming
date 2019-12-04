#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - This function creates a binary tree node at right
 * @parent: node to add new node
 * @value: value to insert in new node
 * Return: poointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *child;

	if (parent)
	{
		newnode = malloc(sizeof(binary_tree_t));
		if (newnode == NULL)
			return (NULL);

		newnode->n = value;
		newnode->left = NULL;
		newnode->right = NULL;
		newnode->parent = parent;
		if (parent->right)
		{
			child = parent->right;
			newnode->right = child;
			child->parent = newnode;
		}
		parent->right = newnode;
		return (newnode);
	}
	return (NULL);
}
