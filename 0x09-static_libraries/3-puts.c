#include "main.h"

/**
 * _puts - prints output
 * @str: holds char
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
