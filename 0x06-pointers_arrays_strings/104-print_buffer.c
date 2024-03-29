#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: holds char value
 * @size: holds in value
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x ", (unsigned char)b[i + j]);
			}
			else
			{
				printf("   ");
			}
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (isprint(b[i + j]))
				{
					printf("%c", b[i + j]);
				}
				else
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
}
