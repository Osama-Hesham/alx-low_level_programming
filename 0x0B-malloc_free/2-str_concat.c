#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - concat
 * @s1: input
 * @s2: input
 * Return: output
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *ptr =  malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

		if (s1 == NULL)
		{
			s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			ptr[i] = s2[j];
			i++;
			j++;
		}
	}
	ptr[(strlen(s1) + strlen(s2) + 1)] = '\0';
	return (ptr);
}
