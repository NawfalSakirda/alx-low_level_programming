#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: the address of memory to fill
 * @b: char constant byte used as filling
 * @n: the size of the memory to be filled
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
