#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/**
 * main - use op
 * @argc: input
 * @argv: input
 * Return: output
 */
int main(int argc, char *argv[])
{
	int bytes = atoi(argv[1]);
	int i = 0;
	char *arr = (char *)main;;

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);

}
