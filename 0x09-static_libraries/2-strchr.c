#include "main.h"

/**
 * *_strchr - initializes the function
 * @s: holds char
 * @c: holds char
 *
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (0);
}
