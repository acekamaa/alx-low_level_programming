#include "main.h"

/**
 * wild_recursive - compares two strings
 * @s1: holds char
 * @s2: holds char
 *
 * Return: wild_recursive
 */
int wild_recursive(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		return (wild_recursive(s1, s2 + 1) || wild_recursive(s1 + 1, s2));
	}

	if (*s1 == *s2)
	{
		return (wild_recursive(s1 + 1, s2 + 1));
	}
	return (0);
}

/**
 * wildcmp - compares strings
 * @s1: holds first char
 * @s2: holds second char
 *
 * Return: s1 and s2
 */
int wildcmp(char *s1, char *s2)
{
	return (wild_recursive(s1, s2));
}
