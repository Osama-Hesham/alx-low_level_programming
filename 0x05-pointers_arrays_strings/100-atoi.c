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
	int x = 0;
	int len = 0;
	char temp[];

	while (*s != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			temp[len] = s[i];
			len++;
		}
	}
	x = atoi(temp);
	return (x);
}
