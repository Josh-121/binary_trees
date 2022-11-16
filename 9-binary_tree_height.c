#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure.
 * Return: (size_t) height of the binary tree or 0 if fail
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rHeight = 0, lHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lHeight = binary_tree_height(tree->left) + 1;
	if (tree->right)
		rHeight = binary_tree_height(tree->right) + 1;

	if (lHeight > rHeight)
		return (lHeight);
	return (rHeight);
}
