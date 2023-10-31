#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with
 * a specific char
 *
 * @size: array size
 * @c: char used to init the array
 *
 * Return: NULL if size = 0 otherwise an array of char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = malloc(size);

	if (a == 0 || size == 0)
		return (0);
	for (i = 0; i < size; ++i)
		a[i] = c;
	return (a);
}
