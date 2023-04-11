#include "main.h"
#include <stdio.h>
/**
 * _strdup - return pointer
 * @str: input
 *  Return: output
 */
char *_strdup(char *str)
{
	int i = 0;
	char *ptr =  malloc(sizeof(char) * strlen(str);
	
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
