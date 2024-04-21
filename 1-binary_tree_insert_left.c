#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - func
 * @parent: parent node
 * @value: val
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;
	
	if (parent == NULL)
		return (NULL);

	left = malloc(sizeof(binary_tree_t));
	if (left == NULL)
		return (NULL);

	new_left->n = value;
	new_left->right = NULL;
	new_node->parent = parent


	if (parent->left)
	{
		parent->left->parent = new_left;
		new_left->parent = parent->left;
	}
	else
	{
		new_left->left = NULL;
		parent->left = new_left;
	}
}

