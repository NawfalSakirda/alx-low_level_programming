#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: prints the alphabets using _putchar
 */

void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
