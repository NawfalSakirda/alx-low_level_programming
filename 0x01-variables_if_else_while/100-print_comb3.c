#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all diffrent two digit combos
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n1 = 0, n2;

	while (n1 <= 9)
	{
		n2 = 0;
		while (n2 <= 9)
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');

				if (n1 != 8 || n2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');

	return (0);
}
