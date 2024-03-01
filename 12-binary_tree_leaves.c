#include <stddef.h>
#include "binary_trees.h"
/**
* binary_tree_leaves - count leaves in a binary tree
* @tree: pointer
* Return: 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		/* If the current node has no children, it is a leaf*/
		return (1);
	}
	else
	{
		/* Recursively count the leaves in the left and right subtrees*/
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}
