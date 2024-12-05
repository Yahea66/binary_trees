#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: A pointer to the parent node where the node is to be inserted left.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
    {
        return NULL;
    }

    binary_tree_t *new_node = binary_tree_node(parent, value);
    if (!parent->left)
    {
        parent->left = new_node;
    }
    else
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
        parent->left = new_node;
    }
    
    return new_node;
}
