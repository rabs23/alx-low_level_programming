#include "main.h"

/**
 * strlen_rec - string lenght
 * @str: char
 * Return: length of the string
 */

int strlen_rec(char *str)
{
	if (*str)
	{
		str++;
		return (1 + strlen_rec(str));
	}
	return (0);
}

/**
 * checker - checks if a character is a palindrome
 * @str: char
 * @length: int
 * @count: int
 * Return: palindrome or not
 */

int checker(char *str, int length, int count)
{
	if (count >= length)
	{
		return (1);
	}
	if (str[length] == str[count])
	{
		return (checker(str, length - 1, count + 1));
	}
	return (0);
}

/**
 * is_palindrome - function that returns 1 if the string is palindrome
 * and prints 0 otherwise
 * @s: the string to be checked
 * Return: palindrome or not
 */

int is_palindrome(char *s)
{
	int length = strlen_rec(s);
	int count = 0;

	return (checker(s, length - 1, count));
}
