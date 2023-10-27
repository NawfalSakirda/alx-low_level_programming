#include "main.h"

/**
 * _strstr - it locates a substring
 *
 * @haystack: string
 * @needle: string
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, l_haystack, l_needle;

	for (l_haystack = 0; haystack[l_haystack] != '\0'; l_haystack++)
		;
	for (l_needle = 0; needle[l_needle] != '\0'; l_needle++)
		;

	if (l_needle == 0)
		return (haystack);

	for (i = 0; i <= l_haystack - l_needle; i++)
	{
		for (j = 0; j < l_needle; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (j == l_needle)
			return (haystack + i);
	}

	return (0);
}
