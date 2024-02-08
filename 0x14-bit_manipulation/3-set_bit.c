#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * set_bit - sets the value of a bit to 1
 * @n: number as parameter
 * @index: holds the position of the parameter
 *
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
