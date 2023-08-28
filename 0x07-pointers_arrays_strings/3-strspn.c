#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets length of substring
 * @s: holds char
 * @accept: holds second char
 *
 * Return: Always count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}

	return (count);
}
