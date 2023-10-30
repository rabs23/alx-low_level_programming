#include "main.h"

/**
 * read_textfile - a function that reads a file and prints it to POSIX stdout
 * @letters: number of letters to be read and printed
 * @filename: name of file to be read
 * Return: number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t reading, writing;
	char *alpha;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	alpha = malloc(sizeof(char) * (letters));
	if (alpha == NULL)
		return (0);
	reading = read(f, alpha, letters);
	writing = write(STDOUT_FILENO, alpha, reading);
	close(f);
	free(alpha);
	return (writing);
}
