#include "main.h"

/**
 * _strpbrk - initializes function
 * @s: holds char
 * @accept: holds char
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}
	return ('\0');
}
