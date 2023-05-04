#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - binary to decimal
 * @b: input
 * Return: output
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i = 0;

	if (b != NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; b[i]; i++)
		{
			if (b[i] != '1' || b[i] != '0')
			{
				return (0);
			}
			else
			{
				num = num * 2 + (b[i] - '0');
			}
		}
		return (num);
	}
}
