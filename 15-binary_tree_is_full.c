#include <stddef.h>
#include "binary_trees.h"
int binary_tree_is_full(const binary_tree_t *tree) {
    /* If tree is NULL, it is considered full*/
    if (tree == NULL) {
        return 1;
    }

    /* If a node has no children, it is full*/
    if (tree->left == NULL && tree->right == NULL) {
        return 1;
    }

    /* If a node has both children, check if both subtrees are full*/
    if (tree->left != NULL && tree->right != NULL) {
        return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
    }

    /* If a node has only one child, the tree is not full*/
    return 0;
}
