#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
 * main - multiply 2 nums
 * @argc: input
 * @argv: input
 * Return: output
 */
int main(int argc, char *argv[])
{
	int x, y, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		product = x * y;
		printf("%d\n", product);
		return (0);

	}

}
