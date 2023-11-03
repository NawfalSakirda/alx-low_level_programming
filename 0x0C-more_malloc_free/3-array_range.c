#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: first integer
 * @max: last integer
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *ar;

	if (min > max)
		return (NULL);

	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		ar[i] = min + i;

	return (ar);
}
