#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randomChar - generates a random character
 * minchar - holds char value
 * maxchar - holds max char value
 * main - entry point, checks code
 * srand - sets time to null
 * Return: Always 0(success)
 */
char randomChar(char minChar, char maxChar)
{
	return (minChar + rand() % (maxChar - minChar + 1));
}

int main(void)
{
	srand(time(NULL));

	int passwordLength = 8;
	char minChar = 'A';
	char maxChar = 'Z';

	printf("Generated Password: ");
	for (int i = 0; i < passwordLength; i++)
	{
		printf("%c", randomChar(minChar, maxChar));
	}
	printf("\n");

	return (0);
}
