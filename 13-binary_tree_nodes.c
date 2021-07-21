#include "binary_trees.h"

int has_child(const binary_tree_t *node);

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointerr to the root of the tree.
 * Return: the number of leaves in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_parents = 0;

	if (tree == NULL)
		return (0);

	num_parents = has_child(tree);

	if (num_parents == 1)
	{
		num_parents += binary_tree_nodes(tree->left);
		num_parents += binary_tree_nodes(tree->right);
	}
	return (num_parents);
}


/**
 * has_child - checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int has_child(const binary_tree_t *node)
{
	if (node != NULL)
	{
		/* It's a leaf! */
		if (node->left != NULL || node->right != NULL)
		return (1);
	}

	return (0);
}
