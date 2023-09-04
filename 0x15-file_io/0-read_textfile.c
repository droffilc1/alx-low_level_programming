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
	FILE *fp;
	char c;

	letters = 0;
	fp = fopen(filename, "r");
	if (fp == NULL || filename == NULL)
		return (0);

	while ((c = fgetc(fp)) != EOF)
	{
		letters = letters + 1;
		printf("%c", c);
	}

	return (letters);

	fclose(fp);
}
