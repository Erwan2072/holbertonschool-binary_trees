#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * Description: If parent already has a right-child, the new node must take its
 * place, and the old right-child must be set as the right-child of the new
 * node.
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: binary_tree_t* - pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	{
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;

		if (parent->right != NULL)
		{
			new_node->right = parent->right;
		}

		parent->right = new_node;
	}
	return (new_node);
}
