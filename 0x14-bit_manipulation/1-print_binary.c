#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: nbre to rep
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8, i = 0;

	while (size)
	{
		if (n & 1L << --size)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}
