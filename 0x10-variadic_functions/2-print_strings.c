#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: additional args
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str != NULL)
			printf("%s", str);
		else if (str == NULL)
			printf("nil");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
