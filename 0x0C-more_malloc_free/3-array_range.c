#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *array_range - function
 * @min: input
 * @max: input
 * Return: output
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *ptr = malloc(sizeof(int) * (max - min + 1));

	if (max > min || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
