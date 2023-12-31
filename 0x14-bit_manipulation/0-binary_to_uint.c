#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		r = r * 2 + (*b++ - '0');
	}
	return (r);
}
