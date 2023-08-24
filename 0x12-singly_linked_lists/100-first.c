#include <stdio.h>

/**
 * print_string - prints a string
 *
 * Return: 0 (Success).
 */
void print_string(void)__attribute__((constructor));
void print_string(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
