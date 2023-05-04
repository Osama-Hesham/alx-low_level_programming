#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/**
 * flip_bits - flip bits
 * @n: input
 * @m: input
 * Return: output
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	int i = 0;
	unsigned int j = 0;


	for (i = 63; i >= 0; i--)
	{
		num = (m ^ n) >> i;
		if (num & 1)
		{
			j++;
		}
	}
	return (j);
}
