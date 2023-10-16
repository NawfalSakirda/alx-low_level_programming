#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to a char
 */

void rev_string(char *s)
{
	int a, b;
	char temp;

	for (a = 0; s[a] != '\0'; ++a)
		;

	for (b = 0; b < a / 2; b++)
	{
		temp = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = temp;
	}
}
