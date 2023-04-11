#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * alloc_grid - grid
 * @width: input
 * @height: input
 * Return: output
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{	
			ptr[i] = malloc(sizeof(int) * width);

			if (ptr[i] == NULL)
			{
				for (j = i; j >= 0; j--)
				{
					free(ptr[j]);
				}
				free(ptr);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				mee[i][j] = 0;
			}
		}
		return (ptr);
	}
}
