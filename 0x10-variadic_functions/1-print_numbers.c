#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @seperator: string to be printed between numbers
 * @n: the number of ints passed to the function
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	if (seperator == NULL)
		seperator = "";

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i != n - 1)
			printf("%s", seperator);
	}
	va_end(arg);

	printf("\n");
}
