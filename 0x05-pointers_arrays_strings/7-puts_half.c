#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: pointer to a char
 */

void puts_half(char *str)
{
	int l, i, n;

	for (l = 0; str[l] != '\0'; ++l)
		;

	if (l % 2 == 0)
		n = l / 2;
	else
		n = (l - 1) / 2 + 1;

	for (i = n; i < l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
