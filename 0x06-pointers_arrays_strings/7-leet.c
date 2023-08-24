#include "main.h"

/**
 * *leet - encodes a string to 1337
 * @str: holds char val
 *
 * Return: Always orig
 */
char *leet(char *str)
{
	char *orig = str;
	char *l = "aeotlAEOTL";
	char *leet_codes = "4307143071";

	while (*str != '\0')
	{
		char *found = strchr(l, *str);

		if (found != NULL)
		{
			*str = leet_codes[found - l];
		}
		str++;
	}
	return (orig);
}
