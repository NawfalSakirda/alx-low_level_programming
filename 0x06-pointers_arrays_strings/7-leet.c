#include "main.h"

/**
 * leet - encodes a str into 1337
 *
 * @s: string
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, c;
	char *cp = s;
	char lowercase[] = {'a', 'e', 'o', 't', 'l'};
	char uppercase[] = {'A', 'E', 'O', 'T', 'L'};
	char code[] = {'4', '3', '0', '7', '1'};

	for (i = 0; cp[i] != '\0'; i++)
	{
		for (c = 0; c < 5; c++)
		{
			if (cp[i] == lowercase[c] || cp[i] == uppercase[c])
			{
				cp[i] = code[c];
				break;
			}
		}
	}

	return (s);
}
