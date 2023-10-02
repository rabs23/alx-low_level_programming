#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 at success
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
	}
	printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
	return (0);
}
