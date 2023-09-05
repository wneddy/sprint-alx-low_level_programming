#include <stdlib.h>
#include "main.h"

/**
 * free_grid - freeing the two dimensional grids
 * formed by alloc_grid function
 * @grid: grid formed
 * @height: height of the grid
 *
 * Return: freed grid
 */

void free_grid(int **grid, int height)
{
	int c;

	c = 0;
	while (c < height)
	{
		free(grid[c]);
		c++;
	}
	free(grid);
}
