#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digits with ". " in between them
 *
 * Return: 0 (success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
