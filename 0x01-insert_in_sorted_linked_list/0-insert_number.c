#include "lists.h"
/**
 *insert_node - inserts a node according to order in sorted singly linked list
 *@head: head node of the linked list
 *@number: data or number of node to insert
 *Return: newNode or NULL
 */
listint_t *insert_node(listint_t **head, int number)
{
listint_t *newNode, *searchNode;

if (*head == NULL)
return (NULL);
searchNode = *head;
newNode = malloc(sizeof(listint_t));
newNode->n = number;
newNode->next = NULL;
while (searchNode)
{
if (newNode->n <= (*head)->n)
{
newNode->next = *head;
*head = newNode;
return (*head);
}
if (searchNode->next)
{
if (newNode->n >= searchNode->n && newNode->n <= searchNode->next->n)
{
newNode->next = searchNode->next;
searchNode->next = newNode;
return (newNode);
}
}
if (!searchNode->next)
{
searchNode->next = newNode;
return (newNode);
}
searchNode = searchNode->next;
}
return (newNode);
}
