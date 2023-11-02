#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/**
 * create_binary_tree_node - Function that creates a binary tree node.
 * @parent: A pointer to the parent node of the new node.
 * @value: The value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *create_binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL)
        return (NULL);
    
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}
