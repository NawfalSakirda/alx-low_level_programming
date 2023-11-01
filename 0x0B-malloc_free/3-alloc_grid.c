#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL on failure otherwise a pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **g;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			g[i][j] = 0;

	return (g);
}
