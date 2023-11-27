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
	ssize_t c;
	size_t *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	t = read(fd, buff, letters);
	if (t == -1)
		return (0);

	t = write(STDOUT_FILENO, buff, t);
	if (t == -1)
		return (0);

	free(buff);
	close(fd);

	return (t);
}
