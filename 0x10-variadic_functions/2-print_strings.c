#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	if (separator == NULL)
		separator = "";

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(arg);

	printf("\n");
}
