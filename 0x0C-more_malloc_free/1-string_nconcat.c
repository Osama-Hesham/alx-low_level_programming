#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - function
 * @s1: input
 * @s2: input
 * @n: input
 * Return: output
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	
	while (s1 != '\0')
		len1++;
	while (s2 != '\0')
		len2++;
	if (n < len2)
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	while (n >= len2 && i < (len1 + len2))
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);

}
