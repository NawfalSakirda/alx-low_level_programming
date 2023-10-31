#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a dupe of str
 *
 * @str: pointer to the string to be duplicated
 *
 * Return: NULL if str is NULL or if memory is insufficient otherwise
 * a pointer to str's dupe
 */

char *_strdup(char *str)
{
	int i;
	char *dupe;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	dupe = malloc(i + 1);

	if (dupe == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dupe[i] = str[i];
	dupe[i] = '\0';

	return (dupe);
}
