#include"main.h"

/**
 * alloc_grid - allocates memory for a 2D array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer to the newly allocated 2D array of integers,
 *         or NULL if the allocation fails or width or height is <= 0.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}

