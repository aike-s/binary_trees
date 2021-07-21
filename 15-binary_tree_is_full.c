#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @rototype: is a pointer to the root node of the tree to check
 * Return: 1 if the tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_child = 0, right_child = 0;

	if (tree == NULL)
		return (0);

	/* If the node has NO children is full :) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_child = binary_tree_is_full(tree->left);
	right_child = binary_tree_is_full(tree->right);

	if (left_child != right_child)
		return (0);
	else
		return (left_child);
}
