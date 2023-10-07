#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int i;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	result = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (result == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		result[s1len + 1] = s2[i];
	return (result);
}
