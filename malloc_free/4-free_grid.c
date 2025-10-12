#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: The pointer to the 2D grid to be freed.
 * @height: The height of the grid (number of rows).
 *
 * Description: This function deallocates the memory for a 2D array. It
 * first frees each individual row, and then frees the array of pointers.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Check for invalid inputs to prevent errors */
	if (grid == NULL || height <= 0)
		return;

	/* Iterate through each row and free the memory allocated for it */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Finally, free the memory allocated for the array of pointers (rows) */
	free(grid);
}
