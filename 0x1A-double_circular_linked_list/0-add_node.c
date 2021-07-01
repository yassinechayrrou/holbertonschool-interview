#include "list.h"

/**
 * add_node_end - Adds new node to end of circular linked list
 * @list: pointer to starting node
 * @str: pointer to string to insert in List node
 * Return: new Node or NULL in case of failure
 */
List *add_node_end(List **list, char *str)
{
	List *newNode;

	if (list == NULL || str == NULL)
		return (NULL);

	newNode = malloc(sizeof(List));

	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	if (!(newNode->str))
	{
		free(newNode);
		return (NULL);
	}
	if (!*list)
	{
		*list = newNode;
		newNode->prev = newNode;
		newNode->next = newNode;
	}
	else
	{
		newNode->prev = (*list)->prev;
		newNode->next = *list;
		newNode->prev->next = newNode;
		newNode->next->prev = newNode;
	}
	return (newNode);
}

/**
 * add_node_begin - Adds new node to the beginning of circular linked list
 * @list: pointer to starting node
 * @str: pointer to string to insert in List node
 * Return: new Node or NULL in case of failure
 */
List *add_node_begin(List **list, char *str)
{
	List *newNode;

	if (list == NULL || str == NULL)
		return (NULL);

	newNode = malloc(sizeof(List));

	newNode->str = strdup(str);

	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}
	if (*list == NULL)
	{
		*list = newNode;
		newNode->prev = newNode;
		newNode->next = newNode;
	}
	else
	{
		newNode->prev = (*list)->prev;
		newNode->next = *list;
		newNode->prev->next = newNode;
		newNode->next->prev = newNode;
		*list = newNode;
	}
	return (newNode);
}
