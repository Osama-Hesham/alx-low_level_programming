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
	int i;
	char *ptr = malloc(sizeof(char) * size);

	if (size == 0)
	{

		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
	}
}
