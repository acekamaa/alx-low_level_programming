#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - performs addition
 * @a: holds first variable
 * @b: holds second variable
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs subtraction
 * @a: holds first var
 * @b: holds second variable
 *
 * Return: subtraction of a from b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication
 * @a: variable
 * @b: variable
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 * @a: var a
 * @b: var b
 *
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - performs modular
 * @a: first var
 * @b: second var
 *
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
