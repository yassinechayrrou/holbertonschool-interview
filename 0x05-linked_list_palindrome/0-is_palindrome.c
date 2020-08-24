#include "lists.h"
/**
 *is_palindrome - checks if linked list is palindrome
 *@head: pointer to head of linked list
 *Return: 0 or 1
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head;

	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	slow = reversePalindrome(slow);
	fast = *head;

	while (slow != NULL)
	{
		if (slow->n != fast->n)
			return (0);
		slow = slow->next;
		fast = fast->next;
	}
	return (1);
}
/**
 *reversePalindrome - stacks LL recursively (reverse) and compares with LL
 *@head: pointer to head of linked list
 *Return: pointer to listint_t 
 */
listint_t *reversePalindrome(listint_t *head)
{
	listint_t *previous = NULL, *next = NULL, *current = head;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	return (previous);
}
