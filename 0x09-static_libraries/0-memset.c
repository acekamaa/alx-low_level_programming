#include "main.h"

/**
 * _memset - fills memory with value
 * @s: holds char
 * @b: holds char
 * @n: number of bytes
 *
 * Return: Always s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
