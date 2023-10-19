#include "main.h"

/**
 * reverse_array - it reverses the content of an array of integers
 *
 * @a: pointer to an int
 * @n: int
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, b, c;

	for (i = 0, b = (n - 1); i < b; i++, b--)
	{
		c = a[i];
		a[i] = a[b];
		a[b] = c;
	}
}
