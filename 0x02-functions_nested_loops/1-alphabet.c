#include "main.h"

/**
 * _alphabet - a function that prints alphabets in lowercase and a new line
 *
 * Return: 0
 */

void print_alphabet(void);
'{'
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
