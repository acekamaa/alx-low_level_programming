#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees memory
 * @grid: pointer to address of memory created
 * @height: holds int
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
