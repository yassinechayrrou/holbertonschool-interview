#include "lists.h"
/**
  *check_cycle - checks if there is a cycle in a Linked list
  *@list: pointer to a node of a Linked list
  *Return: 0 or 1
  */
int check_cycle(listint_t *list)
{
	listint_t *f_pointer = NULL;
	listint_t *s_pointer = NULL;

	if (list == NULL || list->next == NULL)
		return (0);
	s_pointer = list;
	f_pointer = list->next;

	while (f_pointer && f_pointer->next && s_pointer)
	{
		if (s_pointer == f_pointer)
		{
			return (1);
		}
		s_pointer = s_pointer->next;
		f_pointer = f_pointer->next->next;

	}
	return (0);
}
