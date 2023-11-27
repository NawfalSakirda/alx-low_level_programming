#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: path to file
 * @letters: chars to read
 *
 * Return: chars read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t n;
	size_t *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	n = read(fd, buf, letters);
	if (n == -1)
		return (0);

	n = write(STDOUT_FILENO, buf, n);
	if (n == -1)
		return (0);

	free(buf);
	close(fd);

	return (n);
}
