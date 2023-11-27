#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: const char *
 * @text_content: content written in the file
 *
 * Return: 1 if success. -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int bwr;
	int i;

	if (filename == 0)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IRUSR);

	if (fd == -1)
		return (-1);

	if (text_content == 0)
		text_content = "";

	i = 0;
	while (text_content[i])
		i++;

	bwr = write(fd, text_content, i);

	if (bwr == -1)
		return (-1);

	close(fd);
	return (1);
}
