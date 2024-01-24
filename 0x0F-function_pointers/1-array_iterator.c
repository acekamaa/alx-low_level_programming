#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: type int
 * @size: holds sizeof attribute
 * @action: pointer to a function int
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
