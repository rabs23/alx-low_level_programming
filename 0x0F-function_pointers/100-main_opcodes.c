#include "function_pointers.h"
#include <stdlib.h>

/**
 * main - print opcodes of its main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (j < atoi(argv[1]))
	{
		printf("%02x", *((unsigned char *)main + j));
		j++;
		if (j < atoi(argv[1]))
			putchar(' ');
	}
	putchar ("\n");
}
