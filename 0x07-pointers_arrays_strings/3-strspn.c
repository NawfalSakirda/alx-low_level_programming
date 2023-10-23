#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept: string
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, test;
	unsigned int counter = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		test = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				test = 1;
				counter++;
				break;
			}
		}

		if (test == 0)
			break;
	}

	return (counter);
}
