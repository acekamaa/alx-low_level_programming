#include "main.h"

/**
 * is_palindrome_recursive - uses recursion
 * @s: holds char
 * @start: holds int
 * @end: holds end
 *
 * Return: Always s.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - check code
 * @s: holds char
 *
 * Return: is_palindrome
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
