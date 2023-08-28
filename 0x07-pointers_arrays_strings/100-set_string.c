#include "main.h"

/**
 * set_string - sets to char
 * @s: holds  pointer char
 * @to: holds char
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = (char *)malloc(strlen(to) + 1);
	strcpy(*s, to);
}
