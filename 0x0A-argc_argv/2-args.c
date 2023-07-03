#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all the received arguments
 * @argc: argument string
 * @argv: argument pointer
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
	{
	printf("%s\n", argv[x]);
	}

	return (0);
}
