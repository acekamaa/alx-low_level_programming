#include "main.h"

/**
 * **alloc_grid - returns a pointer to 2D
 * @width: holds value width
 * @height: holds value height
 *
 * Return: Always m.
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int x = 0;
	int y = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	m = malloc(sizeof(int *) * height);
	if (m == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		m[x] = malloc(sizeof(int) * width);

		if (m[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(m[x]);
			}
			free(m);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			m[x][y] = 0;
	}
	return (m);
}
