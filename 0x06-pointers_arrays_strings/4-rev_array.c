#include "main.h"

/**
 * reverse_array - reverses the array
 * @a: holds the first int
 * @n: holds the second int
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;

	while (left < right)
	{
		int temp = a[left];

		a[left] = a[right];
		a[right] = temp;

		left++;
		right--;
	}
}
