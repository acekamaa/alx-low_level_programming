#include "main.h"

/**
 * _strspn - initializes the function
 * @s: holds char
 * @accept: holds char
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (a == accept[a])
			{
				n++;
				break;
			}
			else if (accept[a + 1] == '\0')
			{
				return (n);
			}
			s++;
		}
	}
	return (0);
}
