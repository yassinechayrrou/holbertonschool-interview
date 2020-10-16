#include "binary_trees.h"
/**
 * binary_tree_node - creates binary tree node
 * @parent: pointer to parent node of node to create
 * @value: value of binary tree node to create
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);
	if (parent != NULL)
		newNode->parent = parent;
	newNode->n = value;
	return (newNode);
}
