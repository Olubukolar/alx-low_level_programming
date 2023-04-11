#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - main entry
 * @grid: parameter 1
 * @height: parameter 2
 * Return: Always (0)
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0 ; index < height ; index++)
		free(grid[index]);

	free(grid);
}
