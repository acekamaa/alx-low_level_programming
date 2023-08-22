#include "Main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointer
 * @dest: holds char value
 * @src: holds char value
 * Return: Always 0(success)
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		putchar(*dest_ptr);
	}
	*dest = '\0';
	putchar(*dest_ptr);

	return (0);
}
