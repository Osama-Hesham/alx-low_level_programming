#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * int_index - find index
 * @array: input
 * @size: input
 * @cmp: input
 *  Return: output
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	bool found = false;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			found = true;
			return (i);
		}
	}
	if (!found)
	{
		return (-1);
	}
}
