#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
/**
 * print_name - pointer function
 * @name: input
 * @f: input
 * Return: output
 **/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
