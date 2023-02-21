/* program that prints digits of hexadecimal in owercase */
#include <stdio.h>
int main()
{
	int i,j;

	for (i = 0 ; i <=10 ; i++) 
	{
		for (j = 10 ; j <= 16 ; j++)
		{
			putchar(i);
		}
		putchar(j);
	}
	return 0;
}
