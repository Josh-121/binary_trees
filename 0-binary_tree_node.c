#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
        {
            fprintf(stderr, "Error: malloc failed\n");
            exit(EXIT_FAILURE);
        }
    node->n = value;
    node->left = NULL;
    node->right = NULL;
    node->parent = parent;
    
    if (parent != NULL)
    {
        if(parent->n > node->n)
            parent->left = node;
        else
            parent->right = node;
    }
    return node;
} 