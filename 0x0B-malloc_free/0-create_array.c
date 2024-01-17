#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of char, initializes it with a specific char.
 * @size: holds unsigned int
 * @c: holds char
 *
 * Return: NULL  if size is 0, if it fails
 * Or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
