#include "main.h"

/**
 * print_number - prints an integer
 * @n: holds the int
 *
 * Return: nothing
 */
void print_number(int n)
{
	int div = 1;
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (num / 10 != 0)
	{
		div *= 10;
		num /= 10;
	}

	while (div != 0)
	{
		_putchar('0' + n / div);
		n %= div;
		div /= 10;
	}
}
