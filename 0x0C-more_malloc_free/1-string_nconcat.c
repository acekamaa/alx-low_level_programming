#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: holds char
 * @s2: holds char
 * @n: holds n
 *
 * Return: string_nconcat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc(len1 + n + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		result[len1 + i] = s2[i];
	}

	result[len1 + n] = '\0';
	return (result);
}
