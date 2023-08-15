#include <stdio.h>

/**
 * main - Entry point, prints all numbers of base 16 from 0
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
	}
	for (j = 97; j < 103; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
