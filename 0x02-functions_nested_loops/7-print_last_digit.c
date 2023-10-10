#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: takes in an integer.
 *
 * Return: last digit d of a number n.
 */

int print_last_digit(int n)
{
	int d;

	if (n < 0)
		d = (-1) * (n % 10);
	else
		d = n % 10;

	_putchar(d + '0');
	return (d);
}
