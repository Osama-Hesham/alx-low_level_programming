#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * malloc_checked - return pointer
 * @b: input
 * Return: output
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		return (98);
	}
	else
	{
		return (ptr);
	}
}
