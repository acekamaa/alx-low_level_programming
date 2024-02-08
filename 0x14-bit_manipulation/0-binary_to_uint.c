#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of 0 and 1
 *
 * Return: the converted no.
 * Or 0 if theres one or more chars in the string b thats not 0 or 1
 * Or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result = (result * 2) + (b[i] - '0');
	}

	return (result);
}
