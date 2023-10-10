#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the alphabets
 */

void print_alphabet_x10(void)
{
	int l = 0, c;

	while (l <= 9)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		l++;
	}
}
