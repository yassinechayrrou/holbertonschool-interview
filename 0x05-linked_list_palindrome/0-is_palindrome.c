#include "lists.h"
/**
 *is_palindrome - checks if linked list is palindrome
 *@head: pointer to head of linked list
 *Return: 0 or 1
 */
int is_palindrome(listint_t **head)
{
	return (checkPalindrome(*head));
}
/**
 *checkPalindrome - stacks LL recursively (reverse) and compares with LL
 *@head: pointer to head of linked list
 *Return: 1 or 0
 */
int checkPalindrome(listint_t *head)
{
	listint_t *temp;

	temp = head;
	if (temp == NULL)
		return (1);
	checkPalindrome(temp->next) && temp->n == head->n;


}
