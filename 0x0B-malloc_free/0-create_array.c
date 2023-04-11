#include "main.h"
#include <stdlib.h>
/**
 * create_array - create arr
 * @size: input
 * @c: input
 * Return: output
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = malloc(sizeof(char) * size);

	if (ptr == NULL || size == 0)
	{

		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
}
