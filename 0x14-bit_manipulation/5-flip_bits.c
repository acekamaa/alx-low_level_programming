#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts the no of changing bits
 * @n: first num
 * @m: second num to be swapped with
 *
 * Return: bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}
	return (countbit);
}
