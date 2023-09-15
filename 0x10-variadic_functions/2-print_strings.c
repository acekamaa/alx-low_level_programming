#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: holds string
 * @n: holds parameter number
 * @...: holds number
 * Return: If separator NULL dont print
 * else if string is NULL print nil
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *s;
	unsigned int i;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(string, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}
