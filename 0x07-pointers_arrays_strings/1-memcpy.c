#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: holds first char
 * @src: holds char
 * @n: holds int
 *
 * Return: Always dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
