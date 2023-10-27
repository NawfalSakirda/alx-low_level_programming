#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: int
 *
 * Return: pointer to resulting char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
