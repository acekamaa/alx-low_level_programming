#include "Main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 *
 * @str: stores and prints the string
 * return: always 0(success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		/* *str prints the string value */
		_putchar("%d\n:", *str);
		str++;
	}
}
