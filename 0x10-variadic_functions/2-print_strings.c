#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @seperator: string to be printed between strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	if (seperator == NULL)
		seperator = "";

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(arg, *char) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(arg, *char));

		if (i != n - 1)
			printf("%s", seperator);
	}
	va_end(arg);

	printf("\n");
}
