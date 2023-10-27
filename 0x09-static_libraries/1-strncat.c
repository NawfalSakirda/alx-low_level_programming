#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: int
 *
 * Return: pointer to resulting char
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, l;

	c = 0;

	while (dest[c])
		c++;

	for (l = 0; l < n && src[l] != '\0'; l++)
		dest[c + l] = src[l];

	dest[c + l] = '\0';

	return (dest);
}
