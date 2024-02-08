#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * get_bit - gets the bit of an int at a certain position
 * @n: holds the number
 * @index: holds data on position of the number
 *
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index < sizeof(unsigned long int) * CHAR_BIT)
	{
		mask = 1UL << index;
		return ((n & mask) ? 1 : 0);
	}
	else
	{
		return (-1);
	}
}
