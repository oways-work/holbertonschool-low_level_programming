#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Description: This function allocates memory for a 2D array (grid) of
 * integers. Each element of the grid is initialized to 0.
 *
 * Return: A pointer to the newly allocated 2D array on success.
 * NULL if width or height is 0 or negative, or if memory allocation fails.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Validate input dimensions */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows (array of pointers) */
	grid = malloc(sizeof(int *) * height);

	/* Check if the primary allocation was successful */
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for columns for each row and initialize */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		/* Check if column allocation failed */
		if (grid[i] == NULL)
		{
			/* Free all previously allocated memory to prevent leaks */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* Initialize each element of the new row to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
