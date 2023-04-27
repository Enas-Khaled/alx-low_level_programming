#include "main.h"

/**
 * free_grid - frees a 2D array of integers
 * @grid: the grid to be freed
 * @height: the height of the grid
 * Return: nothing
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

