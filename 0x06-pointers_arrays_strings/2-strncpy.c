#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: holds first char
 * @src: holds const char
 * @n: holds int value
 * Return: Always orig(success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *orig = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (orig);
}
