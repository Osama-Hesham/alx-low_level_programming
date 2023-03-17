#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - check if variable is +ve or -ve
 * Return: print variables
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d is positive\n",n);
	}
	else if (n<0)
	{
		printf("%d is negative\n",n);
	}
	else
	{
                printf("%d is zero\n",n);
	}
	return (0);
}
