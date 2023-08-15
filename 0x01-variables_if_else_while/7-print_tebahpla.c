#include <stdio.h>

/**
 * main - Entry point, prints owercase alphabets in reverse
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
