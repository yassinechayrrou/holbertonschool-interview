#include "palindrome.h"
/**
 * is_palindrome - checks if unsigned integer is palindrome
 * @n: takes unsigned long
 * Return: 1 if int is palindrome or 0 if not palindrome
 */
int is_palindrome(unsigned long n)
{
	int i, len;
	char buffer[sizeof(unsigned long) * 8 + 1];

	sprintf(buffer, "%lu", n);
	for (len = 0; buffer[len]; ++len)
		len += 1;
	for (i = 0; i < len / 2; ++i)
	{
		if (buffer[i] != buffer[len - 1 - i])
			return (0);
	}
	return (1);
}
