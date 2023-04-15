#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all the arguments it receives
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 at success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
