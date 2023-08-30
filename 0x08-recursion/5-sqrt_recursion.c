#include "main.h"

/**
 * _sqrt_recursive - calculates square root
 * @n: holds first int
 * @start: holds second int
 * @end: holds int
 *
 * Return: Always n.
 */
int _sqrt_recursive(int n)
{
	int mid;
	int start;
	int end;

	if (start > end)
	{
		return (-1);
	}
	mid = start + (end - start) / 2;
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
