#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: the number of ints passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(arg);

	printf("\n");
}
