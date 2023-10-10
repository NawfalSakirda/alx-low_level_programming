#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Description: prints the alphabets 10 times in seperate lines using _putchar
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
