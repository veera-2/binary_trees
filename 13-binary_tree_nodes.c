#include <stddef.h>
#include "binary_trees.h"
/**
* binary_tree_nodes - counts nodes with atleast one child
* @tree: pointer to the node

* Return: 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left != NULL || tree->right != NULL)
	{
	/* If the current node has at least one child, it is a node*/
	/* Return 1 for the current node and recursively count nodes in the subtrees*/
		return 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	}
	else
	{
	/* If the current node has no children, it is not a node*/
		return (0);
	}
}
