#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - This is an argc and argv function.
 * @grid: Is a pointer.
 * @height: Is a argument.
 * Return: Description of the returned value
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
