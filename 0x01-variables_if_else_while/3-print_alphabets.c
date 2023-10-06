#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabets in lowercase then uppercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char alphabet = 'a', ALPHABET = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');

	return (0);
}
