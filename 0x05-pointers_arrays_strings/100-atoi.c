#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int x;
	int c = 0;
	int i = 0;
	int len = 0;
	int index = 0;

	while (*s != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			len++;
		}
		s++;
		c++;
	}
	
	char temp[len];

	for (i = 0; i < c; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			temp[index] = s[i];
			index++;
		}
	}
	x = atoi(temp);
	return (x);
}
