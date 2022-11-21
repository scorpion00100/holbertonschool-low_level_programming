#include "main.h"

/**
 * create_file - Create a file
 * @filename: Name of the file
 * @text_content: Content to write to the file
 * Return: 1 is successful, -1 failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd, d, s;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (d = 0; text_content[d] != 0; d++)
		;

	s = write(fd, text_content, d);
	close(fd);
	if (s == -1)
		return (-1);
	return (1);
}
