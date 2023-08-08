#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to the allocated memory
 * @height: height of the grid
 *
 * Return: nothing
 */
void  free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;


	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
