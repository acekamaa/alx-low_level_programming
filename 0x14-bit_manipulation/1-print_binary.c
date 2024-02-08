#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts to binary from ul
 * @n: long int unsigned
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask;

	for (i = 31; i >= 0; i--)
	{
		mask = 1UL << i;
		if (n && mask)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
