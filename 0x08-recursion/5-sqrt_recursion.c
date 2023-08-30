#include "main.h"

/**
 * _sqrt_recursive - calculates square root
 * @n: holds first int
 * @s: holds second int
 * @d: holds int
 *
 * Return: Always n.
 */
int _sqrt_recursive(int n)
{
	int mid;
	int s;
	int d;

	if (s > d)
	{
		return (-1);
	}
	mid = s + (d - s) / 2;
	int m = mid * mid;

	if (m == n)
	{
		return (mid);
	}
	else if (m < n)
	{
		return (mid + 1);
	}
	else
	{
		return (mid - 1);
	}
	return (n);
}
