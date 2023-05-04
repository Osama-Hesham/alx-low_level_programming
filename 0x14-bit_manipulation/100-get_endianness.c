#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/**
 * get_endianness - check endian
 * Return: output
 */
int get_endianness(void)
{
	int num = 1;
	char *c = (char *) &num;

	if(*c != 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
