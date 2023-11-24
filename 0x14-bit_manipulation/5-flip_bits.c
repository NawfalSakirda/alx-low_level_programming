#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: The number
 * @m: The number to flip n into
 *
 * Return: The necessary number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xornbres = n ^ m;
	unsigned int i = 0;

	while (xornbres)
	{
		if (xornbres & 1ul)
			i++;
		xornbres = xornbres >> 1;
	}
	return (i);
}
