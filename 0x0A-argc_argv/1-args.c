#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed to it
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 at success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
