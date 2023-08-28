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
	int i;
	int r = n;

	for (i = 0; i < r; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
