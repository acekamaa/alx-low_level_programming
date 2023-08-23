#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: holds the first string
 * @src: holds the second sring
 * Return: Always 0(success)
 */
char *_strcat(char *dest, char *src)
{
	char *orig = dest;

	while (*dest != '\0')
	{
		dest++;
		printf("%d\n", *orig);
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		printf("%d\n", *dest);
	}
	*dest = '\0';

	return (orig);
}

