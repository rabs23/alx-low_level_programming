#include "main.h"

/**
 * _isupper - A function thst checks for uppercase character
 * @c: character to be checked
 * Return: 1 if the character is an uppercase, otherwise, 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
