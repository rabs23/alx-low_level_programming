#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to be added to the end of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f = 0, reading, writing;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (f = 0; text_content[reading]; reading++)
		;
	writing = write(f, reading, text_content);
	if (writing == -1)
		return (-1);
	close(f);
	return (1);
}
