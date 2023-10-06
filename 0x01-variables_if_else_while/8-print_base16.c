#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	int num = 0;
	char ch = 'a';

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
