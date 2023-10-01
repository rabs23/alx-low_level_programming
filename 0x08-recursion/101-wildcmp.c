#include "main.h"

/**
 * wildcmp - a function that compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: 1 if the strings are identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (!(*s1) && (!(*s2)))
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		if (!(*s1))
		{
			return (0);
		}
		if (wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}
	return (0);
}

