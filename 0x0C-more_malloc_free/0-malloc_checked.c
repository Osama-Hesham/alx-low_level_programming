#include "main.h"
/**
 * malloc_checked - return pointer
 * @b: input
 * Return: output
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		return (98);
	}
	else
	{
		return ptr;
	}
}
