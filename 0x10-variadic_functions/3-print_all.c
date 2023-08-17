#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - prints anything
 * @format: the format
 * @...: extra args
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char c, *s;
	float f;
	int index;

	va_start(ap, format);
	index = 0;
	while (format[index])
	{
		switch (format[index])
		{
			case 'i':
				i = va_arg(ap, int);
				printf("%d, ", i);
				break;
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%c, ", c);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s != NULL)
					printf("%s ", s);
				else if (s == NULL)
					printf("nil");
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f, ", f);
				break;
		}
		index++;
	}
	printf("\n");
	va_end(ap);
}
