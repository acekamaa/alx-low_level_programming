#include "Main.h"
#include <stdio.h>

/**
 * puts2 - prints every character
 * @str: holds the string
 * return: always 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i = i + 2;
	}
}
