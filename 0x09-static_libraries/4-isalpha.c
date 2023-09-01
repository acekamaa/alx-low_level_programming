#include "main.h"

/**
 * _isalpha - prints alphabet
 * @c: holds
 *
 * Return: 1 for alphabet else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
