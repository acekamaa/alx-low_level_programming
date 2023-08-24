#include "main.h"

/**
 * *rot13 - encodes a string using ROT13 cipher
 * @str: holds char value
 *
 * Return: Always 0
 */
char *rot13(char *str)
{
	char *orig = str;

	for (; *str != '\0'; str++)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
			{
				*str += 13;
			}
				else
				{
					*str -= 13;
				}
		}
	}
	return (orig);
}
