#include "main.h"

/**
 * prime_chk - tests if n is a prime num
 *
 * @n: int
 * @chk: int
 *
 * Return: int
 */

int prime_chk(int n, int chk)
{
	if (chk >= n && n > 1)
		return (1);
	else if (n % chk == 0 || n <= 1)
		return (0);
	else
		return (prime_chk(n, chk + 1));
}

/**
 * is_prime_number - returns 1 if it's a prime number, 0 otherwise
 *
 * @n: int
 *
 * Return: int
 */

int is_prime_number(int n)
{
	return (prime_chk(n, 2));
}
