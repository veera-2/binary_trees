#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a
 *                       node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 *         Otherwise - a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if node is NULL or the parent is NULL*/
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	/* Determine if the node is a left or right child of its parent*/
	if (node->parent->left == node)
	{
		/* If the node is a left child, return the right child (sibling)*/
		return (node->parent->right);
	}
	else
	{
		/* If the node is a right child, return the left child (sibling)*/
		return (node->parent->left);
	}
}
