#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: array of program command line arguments the 2 numbers in this case
 *
 * Return: 0 (success) or 1 (error)
 */

int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", m);

	return (0);
}
