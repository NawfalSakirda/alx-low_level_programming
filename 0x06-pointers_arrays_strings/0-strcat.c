#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to a char
 * @src: pointer to a char
 *
 * Return: pointer to resulting char
 */

char *_strcat(char *dest, char *src)
{
	int c, tmp;

	c = 0;

	while (dest[c])
		c++;

	for (tmp = 0; src[tmp]; tmp++)
		dest[c++] = src[tmp];

	return (dest);
}
