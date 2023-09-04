#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: a NULL terminated string
 *
 *
 * Return: 1 (Success). Otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, checkw, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;
		checkw = write(fd, text_content, len);

		if (checkw == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
