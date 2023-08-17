#include <stdio.h>
#include <stdarg.h>

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
	int index = 0;

	va_start(ap, format);

	while (format != NULL && format[index] != '\0')
	{
		switch (format[index])
		{
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(ap, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s != NULL)
					printf("%s", s);
				else if (s == NULL)
					printf("nil");
				break;

			default:
				index++;
				continue;
		}
		if (format[index + 1] != '\0')
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(ap);
}
