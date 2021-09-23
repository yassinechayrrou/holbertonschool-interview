#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: binary tree
 * Return: height of the @tree
 */
size_t height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	if (tree == NULL)
		return (-1);

	/* l_height = tree->left ? 1 + height(tree->left) : 0; */
	if (tree->left)
		l_height = 1 + height(tree->left);
	else
		l_height = 0;
	/* r_height = tree->right ? 1 + height(tree->right) : 0; */
	if (r_height)
		r_height = 1 + height(tree->right);
	else
		r_height = 0;

	return (l_height > r_height ? l_height : r_height);
}

/**
 * balance - measures the balance factor of binary tree
 * of a binary tree
 * @tree: pointer to root node of binary tree
 * Return: balance factor
 */

int balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (1);

	left = height(tree->left);
	right = height(tree->right);
	return (abs(left - right) <= 1 && balance(tree->left)
			&& balance(tree->right));
}


/**
 * is_binary_search_tree - checks if is binary search tree [helper function]
 * @node: binary tree root node
 * @min: min in the left subtree
 * @max: max in the right subtree
 * Return: 1 or 0
 */

int is_binary_search_tree(binary_tree_t *node, int min, int max)
{
	if (node == NULL)
		return (1);

	if (node->n < min || node->n > max)
		return (0);

	return
		(is_binary_search_tree(node->left, min, node->n - 1) &&
		 is_binary_search_tree(node->right, node->n + 1, max));
}


/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: binary tree
 * Return: 1 if @tree is BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_binary_search_tree((binary_tree_t *)tree, INT_MIN, INT_MAX));
}


/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree
 * @tree: binary tree
 * Return: 1 if tree is a valid AVL Tree, and 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int bst, blc;

	if (tree == NULL)
		return (0);

	bst = binary_tree_is_bst(tree);
	blc = balance(tree);

	return (bst == 1 && blc == 1);
}
