#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: new node or NULL if fail
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *store = NULL;/* will store the address of parent left-child */

	if (parent == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		store = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = store;
		store->parent = parent->right;
		store = NULL;
		return (parent->right);
	}

	parent->right = binary_tree_node(parent, value);
	return (parent->right);
}
