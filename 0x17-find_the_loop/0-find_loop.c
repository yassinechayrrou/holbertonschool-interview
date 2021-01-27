#include "lists.h"
/**
 * find_listint_loop - finds loop in a linked list
 * @head: pointer to head of linked list
 * Return: Adress of node where loop starts or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fastPointer = NULL, *slowPointer = NULL;

	slowPointer = head;
	fastPointer = head;
	while (fastPointer != NULL && fastPointer->next != NULL)
	{
		fastPointer = fastPointer->next->next;
		slowPointer = slowPointer->next;

		if (fastPointer == NULL)
			return (NULL);
		if (fastPointer == slowPointer)
			break;
	}
	slowPointer = head;
	while (slowPointer != fastPointer)
	{
		slowPointer = slowPointer->next;
		fastPointer = fastPointer->next;
	}
	return (slowPointer);
}
