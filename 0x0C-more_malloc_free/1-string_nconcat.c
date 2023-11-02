#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: pointer to a string
 * @s2: pointer to a string
 * @n: n bytes of s2
 *
 * Return: pointer to s1, followed by the first n bytes of s2 ends by null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;

	for (j = 0; j < n && s2[j]; i++, j++)
		;

	c = malloc(i + 1);
	if (c == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		c[i] = s1[i];
	for (j = 0; j < n && s2[j]; i++, j++)
		c[i] = s2[j];
	c[i] = '\0';

	return (c);
}
