#include "main.h"

/**
 * *_strpbrk - searches string for bytes set
 * @s: holds char
 * @accept: holds char second
 *
 * Return: Nothing.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
