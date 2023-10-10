#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic.
 *
 * @c: the character to be checked.
 *
 * Return: 1 if the character is a letter 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
