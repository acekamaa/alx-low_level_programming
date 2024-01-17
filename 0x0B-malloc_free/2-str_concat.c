#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: holds char
 * @s2: holds char
 *
 * Return: Always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *g;
	size_t len_s1, len_s2, len_result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	len_result = len_s1 + len_s2 + 1;

	g = malloc(len_result * sizeof(char));
	if (g == NULL)
		return (NULL);

	strcpy(g, s1);
	strcat(g, s2);

	return (g);
}
