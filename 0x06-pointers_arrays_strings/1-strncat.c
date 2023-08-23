#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: holds first char
 * @src: holds second char
 * @'n': holds int value
 * Return: Always orig(success)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *orig = dest;

	while (*dest != '\0')
	{
		dest++;
		printf("%d\n", *orig);
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
		printf("%d\n", *dest);
	}
	*dest = '\0';
	return (orig);
}
