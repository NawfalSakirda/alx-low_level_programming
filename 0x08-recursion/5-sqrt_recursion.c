#include "main.h"

/**
 * sqrrt - get square root
 *
 * @n: int
 * @r: int square root
 *
 * Return: int
 */

int sqrrt(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r < n)
		return (sqrrt(n, r + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (sqrrt(n, 1));
}
