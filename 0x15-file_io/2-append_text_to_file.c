#include "main.h"

/**
 * _strlen - finds length of a string
 * @s: string to be checked
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string
 *
 * Return: 1 (Success). Otherwise -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int checkw;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		checkw = write(fd, text_content, _strlen(text_content));

		if (checkw == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
