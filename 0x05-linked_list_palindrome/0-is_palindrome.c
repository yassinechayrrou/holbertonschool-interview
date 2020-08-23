#include "lists.h"
/**
 *
 *
 *
 */
int is_palindrome(listint_t **head)
{
	listint_t *temp = *head;
	return checkPalindrome(*head);
}
/**
 *
 *
 *
 */
int checkPalindrome(listint_t *head)
{
	if (head == NULL)
		return (1);
	checkPalindrome(head->next);
	printf("%d ", head->n);
	//if (temp == head)
}
