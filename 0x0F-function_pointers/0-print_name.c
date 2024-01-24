#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: holds the name as arg
 * @f: pointer to a function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
