#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, l1, l2;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;

	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	c = malloc(l1 + l2 + 1);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		c[i] = s1[i];

	for (i = 0; i < l2; i++)
		c[l1 + i] = s2[i];

	c[l1 + l2] = '\0';

	return (c);
}
