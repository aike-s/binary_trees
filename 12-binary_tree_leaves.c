#include "binary_trees.h"

int is_leaf(const binary_tree_t *node);

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: pointerr to the root of the tree.
 * Return: the number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaves = 0;

	if (tree == NULL)
		return (0);

	num_leaves = is_leaf(tree);

	if (num_leaves == 0)
	{
		num_leaves += binary_tree_leaves(tree->left);
		num_leaves += binary_tree_leaves(tree->right);
	}
	return (num_leaves);
}

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		/* It's a leaf! */
		if (node->left == NULL && node->right == NULL)
		return (1);
	}

	return (0);
}
