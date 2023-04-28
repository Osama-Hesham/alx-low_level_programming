#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>
/**
 * main - print name of program
 * @argc: input
 * @argv: input
 * Return: output
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int x;

	while (i < argc) /*Goes through the whole array*/
	{
		if (isdigit(argv[i]))
		{
			x = atoi(argv[i]);
			sum += x;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}
	printf("%d\n", sum);
	return (0);

}
