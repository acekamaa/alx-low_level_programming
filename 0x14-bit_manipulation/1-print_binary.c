#include "main.h"
#include <stdio.h>

/**
 * _pow - func calc (base ^ power)
 * @base: base of exponent
 * @power: the exponent raising factor
 *
 * Return: val of _pow
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
	{
		num *= base;
	}
	return (num);
}

/**
 * print_binary - prints a number in binary fashion
 * @n: number to be printed
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag = 0;

	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			putchar('0');
		}
		divisor >>= 1;
	}
}
