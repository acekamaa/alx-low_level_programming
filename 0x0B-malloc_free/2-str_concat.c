#include "main.h"
#include <stddef.h>

/**
 * str_concat - concatenates two strings.
 * @s1: holds string 1
 * @s2: holds string 2
 *
 * Return: conct
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i;
	int ci;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = ci = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[ci] != '\0')
	{
		ci++;
	}
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++;
		ci++;
	}
	conct[i] = '\0';
	return (conct);
}
