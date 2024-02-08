#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets 0 as val at a said index
 * @n: holds the val
 * @index: the said location
 *
 * Return: Always 0;
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n  &= ~(1 << index);
	return (1);
}
