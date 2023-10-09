#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @n: bytes allocated
 * @s1: first string
 * @s2: second string
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, b, c;
	char *k;

	if (s1 == NULL)
		a = 0;
	else
	for (a = 0; s1[a] != '\0'; a++)
	if (s2 == NULL)
		b = 0;
	else
	for (b = 0; s2[b] != '\0'; b++)
	if (b > a)
		b = n;
	k = malloc(sizeof(char) * (a + b + 1));
	if (k == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		k[c] = s1[c];
	for (c = 0; c < b; c++)
		k[c + 1] = s2[c];
	k[a + b] = '\0';
	return (k);
}
