#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char a[] = "abcdefghijklmnopuvwxyz";
	char b[] = "ABCDEFGHIJKLMNOPUVWXYZ";
	int i;
	int j;

	for (i = 0; i < 26; i++)
	{
		for (j = i; j < 26; j++)
		{
		putchar(b[j]);
		}
	putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
