#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to be printed
 * Return: 1 on success, return -1 on error and set it appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
