#include "holberton.h"
/**
 *wildcmp - compares two strings together
 *@s1: pointer to character
 *@s2: pointer to charcter
 *Return: 1 if strings are considered identical else returns 0
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	else if (!*s1 && *s2 != '*')
		return (!*s2);
	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}
