#include "main.h"

/**
 * _strlen - prints length of string
 * @s: holds char
 *
 * Return: h
 */
int _strlen(char *s)
{
	int h = 0;

	while (*s != '\0')
	{
		h++;
		s++;
	}
	return (h);
}
