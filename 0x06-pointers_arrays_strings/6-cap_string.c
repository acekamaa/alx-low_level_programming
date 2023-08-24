#include "main.h"

/**
 * is_separator - stores the separators
 * @c: holds char value
 * Return: Always 0(success)
 */
int is_separator(char c)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (separators[i] == c)
		{
			return (1);
		}
	}
	return (0);
}

/**
 * *cap_string - capitalizes each string
 * @str: holds char value
 *
 * Return: Always str.
 */
char *cap_string(char *str)
{
	int i;
	int cap = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
		{
			cap = 1;
		}
		else if (cap && islower(str[i]))
		{
			str[i] = toupper(str[i]);
			cap = 0;
		}
		else
		{
			cap = 0;
		}
	}
	return (str);
}
