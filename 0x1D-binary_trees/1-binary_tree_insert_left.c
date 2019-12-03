#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - This function creates a binary tree node at left
 * @parent: node to add new node
 * @value: value to insert in new node
 * Return: poointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
		if (parent->left)
		{
			child = parent->left;
		 	newnode->left = child;
			child->parent = newnode;
		}
		parent->left = newnode;
		return (newnode);
	}
	return (NULL);
}
