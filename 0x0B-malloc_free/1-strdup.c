#include "main.h"

/**
 * _strdup - returns a pointer
 * @str: holds type char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	int i;
	int r;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
	{
		a[r] = str[r];
	}
	return (a);
}
