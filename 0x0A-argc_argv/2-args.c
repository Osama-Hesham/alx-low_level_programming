#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
 * main - print all args
 * @argc: input
 * @argv: input
 * Return: output
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
