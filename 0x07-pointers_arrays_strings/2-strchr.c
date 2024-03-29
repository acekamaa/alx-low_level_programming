#include "main.h"

/**
 * *_strchr - locates a char in string
 * @s: holds char
 * @c: holds second char
 *
 * Return: Always s.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
