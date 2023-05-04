#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/**
 * get_bit - print value at i
 * @n: input
 * @index: input
 * Return: output
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		num = (n >> index) & 1;
		return (num);
	}
}
