#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: the number of times the character _ should be printed
 */

void print_line(int n)
{
	int c = 1;

	if (n > 0)
	{
		while (c <= n)
		{
			_putchar('_');
			c++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
