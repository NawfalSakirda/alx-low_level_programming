#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for
 * an amount of money
 *
 * @argc: number of arguments
 * @argv: array of program command line arguments
 *
 * Return: 0 (success) or 1 (error)
 */

int main(int argc, char *argv[])
{
	int cents, counter;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	counter = 0;
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (cents)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		counter++;
	}

	printf("%d\n", counter);

	return (0);
}
