#include "Main.c"
#include <stdio.h>

/**
 * print_array - prints the n elements of an array of integers followed by a new line
 * @a: holds the int as pointer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(",");
		}
	}
}
