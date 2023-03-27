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
	int number = 0;

	while (*s != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			x = s[i];
			number = number * 10 + x;
		}
		s++;
		c++;
	}
	return (number);
}
