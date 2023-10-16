#include "main.h"

/**
 * _strcpy - copy a string from src to dest
 *
 * @dest: pointer to a char
 * @src: pointer to a char
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
