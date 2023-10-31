#include "main.h"

/**
 * append_text_to_file - function that appends file at the end of the text
 * @filename: name of the file
 * @text_content: NULL terminated string to add to the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, reading, writing;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		for (reading = 0; text_content[reading]; reading++)
			writing = write(f, text_content, reading);
		if (writing == -1)
			return (-1);
	}
	close(f);
	return (1);
}
