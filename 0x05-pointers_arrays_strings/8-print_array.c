#include "Main.h"
#include <stdio.h>

/**
 * print_array - prints elements of array
 * @a: holds the int as pointer
 * 'n' holds int element
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
	printf("\n");
}
