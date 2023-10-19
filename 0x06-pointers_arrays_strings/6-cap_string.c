#include "main.h"

/**
 * lower - tests if character is lowercase
 *
 * @c: character
 *
 * Return: 1 if true, 0 if false
 */

int lower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * delim - tests if character is a delimiter
 *
 * @c: character
 *
 * Return: 1 if true, 0 if false
 */

int delim(char c)
{
	int a;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (a = 0; a <= 11; a++)
		if (c == delimiter[a])
			return (1);
	return (0);
}

/**
 * cap_string - capitalize all words of a string
 *
 * @s: string inpt
 *
 * Return: uppr string
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int del = 1;

	while (*s)
	{
		if (delim(*s))
			del = 1;
		else if (lower(*s) && del)
		{
			*s -= 32;
			del = 0;
		}
		else
			del = 0;
		s++;
	}
	return (ptr);
}
