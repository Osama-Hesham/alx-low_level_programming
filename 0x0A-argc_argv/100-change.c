#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
 * main - min num of coins
 * @argc: input
 * @argv: input
 * Return: output
 */
int main(int argc, char *argv[])
{
	int coins[] = {1, 2, 5, 10, 25};
	int i = 0;
	int sum = 0;
	int x = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 4; i >= 0; i--)
		{
			while (x >= coins[i])
			{
				sum++;
				x -= coins[i];
			}
		}
	}

	printf("%d\n", sum);
	return (0);

}
