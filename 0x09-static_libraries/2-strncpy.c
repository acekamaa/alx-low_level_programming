#include "main.h"

/**
 * _strncpy - copies string value
 * @dest: holds char
 * @src: holds src
 * @n: holds int
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
