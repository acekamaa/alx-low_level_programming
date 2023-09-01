#include "main.h"

/**
 * _atoi - to convert a string into an integer
 * @s: the string to use in program
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int g = 1;
	int i = 0;
	unsigned int u = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			g *= -1;
			i++;
		}
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		u = (u * 10) + (s[i] - '0');
		i++;
	}
	u *= g;
	return (u);
}
