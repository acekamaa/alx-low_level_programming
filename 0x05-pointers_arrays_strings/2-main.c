#include "Main.h"
#include <stdio.h>

/**
 * main - checks the length of string
 *
 * Return: always len(success)
 */
int main(void)
{
	char *s;
	int len;

	s = "My first strlen!";
	len = _strlen(s);
	printf("%d\n", len);
	return (len);
}
