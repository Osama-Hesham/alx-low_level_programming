#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *  array_iterator - return elements
 *  @array: input
 *  @size: input
 *  @action: input
 *  Return: output
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
	{
		return;
	}
	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
