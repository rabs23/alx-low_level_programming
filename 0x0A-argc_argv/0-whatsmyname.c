#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name followed by a new line
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 at success
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
