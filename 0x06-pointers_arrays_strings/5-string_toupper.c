#include "main.h"

/**
 * *string_toupper - converts lower to upper
 * @str: holds char value
 *
 * Return: Always orig
 */
char *string_toupper(char *str)
{
	char *orig = str;

	while (*str != '\0')
	{
		if (islower(*str))
		{
			*str = toupper(*str);
		}
		str++;
	}
	return (orig);
}
