#include "main.h"

/**
 * main - Entry point, updates parameter value by use of pointers
 *
 * reset_to_98 - holds the function to update parameter value
 *
 * Return: Always 0(success)
 */
int main(void)
{
	void reset_to_98(int *n)
	{
		int n;
		int *p = &n;

		n = 402;
		printf("n is:%d\n",n);

		p = 98;
		printf("n is:%d\n",n);
	}
	return (0);
}

