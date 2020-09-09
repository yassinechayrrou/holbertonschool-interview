#include "lists.h"
/**
  *check_cycle - checks if there is a cycle in LL using floyd's algorithm
  *@list: pointer to a node of a Linked list
  *Return: 0 or 1
  */
int check_cycle(listint_t *list)
{
	listint_t *fp = NULL;
	listint_t *sp = NULL;

	if (list == NULL || list->next == NULL)
		return (0);
	sp = list;
	fp = list->next;

	while (fp && fp->next && sp)
	{
		if (sp == fp)
		{
			return (1);
		}
		sp = sp->next;
		fp = fp->next->next;

	}
	return (0);
}
