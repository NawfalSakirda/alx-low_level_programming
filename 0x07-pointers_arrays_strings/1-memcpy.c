#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: memory adress to copy to
 * @src: memory adress to copy from
 * @n: amount of bytes to copy
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
