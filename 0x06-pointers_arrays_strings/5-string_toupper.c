#include "main.h"

/**
 * string_toupper - it changes all lowercase letters to uppercase
 *
 * @s: string
 *
 * Return: string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
