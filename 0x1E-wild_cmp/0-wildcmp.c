#include "holberton.h"
/**
 *
 * wildcmp - compares two strings
 *@s1: pointer to char 
 *@s2 pointer to char 
 *Return: 1 if strings are considered identical else returns 0
 *
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
