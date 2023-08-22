#include "Main.h"
#include <stdio.h>

/**
 * _atoi - converts char to int
 * @s: holds the char value
 * Return: Always 0(success)
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (result > (2147483647 - (*s - '0')) / 10)
		{
			if (sign == 1)
			{
				return (2147483647);
			}
			else
			{
				return (-2147483648);
			}
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
