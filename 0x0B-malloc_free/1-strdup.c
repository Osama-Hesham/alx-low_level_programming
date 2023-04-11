#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - return pointer
 * @str: input
 *  Return: output
 */

char *_strdup(char *str)
{
	size_t i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * strlen(str));
	if (ptr == NULL || str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < strlen(str); i++)
		{
			ptr[i] = str[i];
		}
		return (ptr);
	}
}
