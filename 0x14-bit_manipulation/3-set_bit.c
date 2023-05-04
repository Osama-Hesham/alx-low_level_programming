#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/**
 * set_bit - set bit
 * @n: input
 * @index: input
 * Return: output
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n = ((1 << index) | *n);
		return (1);
	}
}
