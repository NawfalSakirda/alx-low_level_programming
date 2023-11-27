#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: const char *
 * @text_content: added content
 *
 * Return: 1 if file exists. -1 if file does not exist or if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int bwr;

	if (filename == 0)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
		{
			i++;
		}

		bwr = write(fd, text_content, i);

		if (bwr == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
