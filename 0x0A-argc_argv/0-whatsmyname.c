#include <stdio.h>

/**
 * main - program that prints its name followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 at success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
