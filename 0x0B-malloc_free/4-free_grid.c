#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * free_grid - free grid
 * @grid: input
 * @height: input
 * Return: output
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
