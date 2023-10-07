#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that copies string to a newly allocated memory
 * @str: the string to be duplicated
 * Return: A pointer to the duplicated sring on success and NULL on failure
 */

char *_strdup(char *str)
{
	int i;
	char *copied;
	int count = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	copied = malloc(sizeof(char) * count + 1);

	if (copied == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copied[i] = str[i];
	return (copied);
}
