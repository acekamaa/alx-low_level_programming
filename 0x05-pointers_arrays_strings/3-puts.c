#include "Main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * *t - stores and prints the string
 * return: always t(success)
 */
void _puts(char *t)
{
	while (*t != '\0')
	{
		/* *t prints the string value */
		printf("%d\n:",*t);
		t++;
	}
}
