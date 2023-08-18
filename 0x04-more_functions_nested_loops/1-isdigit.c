#include "main.h"

/**
 * _isdigit checks code
 * c - local variable to store value
 *
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

/**
 * main - Entry point runs function call
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	_isdigit(int c);
	return (0);
}
