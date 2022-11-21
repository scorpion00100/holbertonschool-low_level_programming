#include "main.h"

/**
 * read_textfile - read a text file and prints it to the POSIX stdout
 * @filename: name of the file
 * @letters: bytes to print
 * Return: bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc((sizeof(char) * letters) + 1);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
		return (0);

	buffer[letters] = '\0';
	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write == -1)
		return (0);

	free(buffer);
	close(fd);

	return (n_read);
}
