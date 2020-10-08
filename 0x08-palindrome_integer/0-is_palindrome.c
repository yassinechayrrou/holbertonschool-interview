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

	len = strlen(yassineItoa(n, buffer));
	for (i = 0; i < len / 2; ++i)
	{
		if (buffer[i] != buffer[len - 1 - i])
			return (0);
	}
	return (1);
}

/**
 * yassineItoa - converts unsigned long to string
 * @n: take unsigned long
 * @string: takes pointer to char
 * Return: pointer to char (string)
 */
char *yassineItoa(unsigned long n, char *string)
{
	if (string == NULL)
		return (NULL);
	sprintf(string, "%lu", n);
	return (string);
}
