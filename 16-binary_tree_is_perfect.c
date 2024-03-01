#include <stddef.h>
#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_count_nodes(const binary_tree_t *tree);

int binary_tree_is_perfect(const binary_tree_t *tree) {
    if (tree == NULL) {
        return (0);
    }

    size_t height = binary_tree_height(tree);
    size_t node_count = binary_tree_count_nodes(tree);

    /* Calculate the maximum number of nodes in a perfect binary tree of given height*/
    size_t perfect_node_count = (1 << (height + 1)) - 1;

    return node_count == perfect_node_count;
}

/* Function to calculate the height of a binary tree*/
size_t binary_tree_height(const binary_tree_t *tree) {
    if (tree == NULL) {
        return (0);
    }

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    return (left_height > right_height) ? (left_height + 1) : (right_height + 1);
}

/* Function to count the number of nodes in a binary tree*/
size_t binary_tree_count_nodes(const binary_tree_t *tree) {
    if (tree == NULL) {
        return (0);
    }

    return 1 + binary_tree_count_nodes(tree->left) + binary_tree_count_nodes(tree->right);
}
