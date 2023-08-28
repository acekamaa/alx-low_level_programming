#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: pointer to array
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int r;
	int c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			printf("%c ", a[r][c]);
		}
		printf("\n");
	}
}
