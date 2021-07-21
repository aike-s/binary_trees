#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree
 * Return: the balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_node = 0, right_node = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_node = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_node = binary_tree_height(tree->right) + 1;

	return (left_node - right_node);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointerr to the root of the tree
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	/* if there are no children */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* return the max value adding 1 */
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
