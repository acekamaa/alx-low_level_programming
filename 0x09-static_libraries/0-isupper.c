#include "main.h"

/**
 * _isupper - prints upper or lowercase
 * @c: holds int
 *
 * Return: Always 1 if upper
 * Or 0 if lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
