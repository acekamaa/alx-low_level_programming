#include "main.h"

/**
 * is_divisible - returns prime or not
 * @n: holds int
 * @divisor: holds int
 *
 * Return: Always 0(otherwise 1)
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}
	if (n % divisor == 0)
	{
		return (1);
	}
	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - returns value of prime
 * @n: holds int
 *
 * Return: Always n
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	return (!is_divisible(n, n - 1));
}
