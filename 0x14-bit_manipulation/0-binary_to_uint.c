#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/**
 * binary_to_uint - binary to decimal
 * @b: input
 * Return: output
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int i = 0;

	if (b != NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; b[i]; i++)
		{
			unsigned int j = 0;
			unsigned int res = 0;

			if (b[i] != '1' || b[i] != '0')
			{
				return (0);
			}
			else
			{
				for (j = 0; j <= i; i++)
				{
					res += j * 2;
				}
				
				n += res * b[i] ;
			}
		}
		return (n);
	}
}
