#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: const char * const
 */

void print_all(const char * const format, ...)
{
	int i, c, int_arg, char_arg;
	double float_arg;
	char *string_arg;
	va_list arg;

	va_start(arg, format);
	i = 0;
	while (format != NULL && format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				char_arg = va_arg(arg, int);
				printf("%c", char_arg);
				break;
			case 'i':
				int_arg = va_arg(arg, int);
				printf("%d", int_arg);
				break;
			case 'f':
				float_arg = va_arg(arg, double);
				printf("%f", float_arg);
				break;
			case 's':
				string_arg = va_arg(arg, char *);
				if (string_arg == NULL)
					string_arg = "(nil)";
				printf("%s", string_arg);
				break;
			default:
				i++;
				continue;
		}
		i++;
		if (format[i] != '\0')
			printf(", ");
	}
	va_end(arg);
	printf("\n");
}
