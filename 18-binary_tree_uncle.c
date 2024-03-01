#include <stddef.h>
#include "binary_trees.h"
binary_tree_t *binary_tree_uncle(binary_tree_t *node) {
    /* Check if node is NULL or the parent is NULL*/
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL) {
        return NULL;
    }

    /* Determine if the parent is a left or right child of its parent (the grandparent of node)*/
    binary_tree_t *grandparent = node->parent->parent;
    if (grandparent->left == node->parent) {
        /* If the parent is a left child of the grandparent, return the right child of the grandparent (uncle)*/
        return grandparent->right;
    } else {
        /* If the parent is a right child of the grandparent, return the left child of the grandparent (uncle)*/
        return grandparent->left;
    }
}
