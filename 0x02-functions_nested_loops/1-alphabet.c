#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 */
void print_alphabet(void);

void print_alphabet(void)
{
	int i;

	for (i = 65; i < 90; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
