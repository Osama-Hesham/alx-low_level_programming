#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/**
 * print_binary - decimal to binary
 * @n: input
 */
void print_binary(unsigned long int n)
{
	unsigned int x = 0; 
	int i = 0;
	unsigned long int num;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			putchar('1');
			x++;
		}
		else if (num)
		{
			putchar('0');
		}
	}
	if (!x)
	{
		putchar('0');
	}
}
