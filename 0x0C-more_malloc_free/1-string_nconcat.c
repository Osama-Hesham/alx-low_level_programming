#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *string_nconcat - concat
 * @s1: input
 * @s2: input
 * @n: input
 * Return: output
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n < strlen(s2))
	{
		ptr = malloc(strlen(s1) + n + 1);
	}
	else
	{
		ptr = malloc(strlen(s1) + strlen(s2) + 1);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		ptr[i] = s1[i];
	}
	if (n < strlen(s2))
	{
		for (j = 0; j < n; j++)
		{
			ptr[i + j] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < strlen(s2); j++)
		{
			ptr[i + j] = s2[j];
			i++;
		}
	}
	ptr[i + j] = '\0';
	return (ptr);
}
