#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: the variable to be printed
 * Return: on succes, 1
 * on error, -1 is returned and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
