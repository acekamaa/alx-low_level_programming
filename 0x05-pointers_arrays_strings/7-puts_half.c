#include "Main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: holds the string value
 */
void puts_half(char *str)
{
	int i;
	int length = strlen(str);
	int start = (length + 1) / 2;

	for (i = start; i < length; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
