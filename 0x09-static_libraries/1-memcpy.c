#include "main.h"

/**
 * *_memcpy - copies memory used
 * @dest: holds char
 * @src: holds char
 * @n: holds int
 *
 * Return: Alawys dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p;
	int i = n;

	for (p = 0; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
