#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: holds int
 * @argv: holds char
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum;
	int num;
	int i;
	int j;
	bool error;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	error = false;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				error = true;
				break;
			}
		}
		if (error)
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);

	return (0);
}
