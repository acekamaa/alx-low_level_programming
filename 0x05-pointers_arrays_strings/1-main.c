#include "Main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * return: always 0(success)
 */
int main(void)
{
	int a;
	int b;
	
	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
