#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 *
 * @argc: number of arguments
 * @argv: array of program command line arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
