#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
 * main - print number of args
 * @argc: input
 * @argv: input
 * Return: output
 */

int main(int argc,  char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

