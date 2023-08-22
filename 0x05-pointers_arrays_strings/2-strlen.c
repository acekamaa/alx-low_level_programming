#include "Main.h"

/**
 * _strlen - checks the length of a string
 * @s: holds the string value
 * Return: Always 0(success)
 */
int _strlen(char *s)
{
	int r = 0;

	while (*s != '\0')
	{
		r++;
		s++;
	}
	return (0);
}
