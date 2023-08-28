#include "main.h"

/**
 * print_diagsums - prints sum
 * @a: holds int
 * @size: holds int
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_main = 0;
	int sum_secondary = 0;

	for (i = 0; i < size; i++)
	{
		sum_main += a[i * size + i];
		sum_secondary += a[i * size + (size - 1 - i)];
	}
	printf("Sum of main diagonal: %d\n", sum_main);
	printf("Sum of secondary diagonal: %d\n", sum_secondary);
}
