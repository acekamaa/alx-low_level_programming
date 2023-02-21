/* program that prints alphabets 10 times */
#include <stdio.h> 
int main(void)
{
	int a;

	void print_alphabet_x10(void);
	return 0;
}
{
	void print_alphabet_x10(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
}
