#include "Main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: holds the integer value to be swapped
 * @b: holds the integer to be swapped
 * return: always 0(success)
 */
void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
