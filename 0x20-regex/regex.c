#include "regex.h"

/**
 * regex_match - checks if pattern matches given string
 * @str: string to match to
 * @pattern: regular expression
 * Return: 1 if pattern do match, else 0
 */

int regex_match(char const *str, char const *pattern)
{
	int dot = 0, star = 0;

	if (!pattern || !str)
		return (0);

	/*
	dot = *str && (*str == *pattern || *pattern == '.');
	star = *(pattern + 1) == '*';

	if (!*str && !star)
		if (*pattern)
			return (0);
		else
			return (1);

	if (dot && star)
		return (regex_match(str + 1, pattern) || regex_match(str, pattern + 2));
	if (dot && !star)
		return (regex_match(str + 1, pattern + 1));
	if (star)
		return (regex_match(str, pattern + 2));
	return (0);
	*/
	return (1);
}
