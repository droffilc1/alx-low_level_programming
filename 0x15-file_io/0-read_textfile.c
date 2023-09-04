#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the
 * POSIX standard output
 * @filename: pointer to filename
 * @letters: number of letters it should read and print
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, checkr, checkw;
	char *c;

	if (filename == NULL)
		return (0);

	c = malloc(letters + 1);
	if (c == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (free(c), 0);

	checkr = read(fd, c, letters);

	if (checkr == -1)
		return (free(c), 0);

	c[letters] = '\0';

	checkw = write(STDOUT_FILENO, c, checkr);
	if (checkw == -1)
		return (free(c), 0);

	free(c);
	close(fd);
	return (checkw);
}
