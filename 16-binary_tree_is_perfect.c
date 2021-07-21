#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree) == 0)
		return (0);
	else
		return (1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointerr to the root of the tree
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* if there are no children */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left);

	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right);

	/* return the max value adding 1 */
	if (left_height != right_height)
		return (0);
	else
		return (right_height + 1);
}
