#include "main.h"
/**
 * print_array - print array
 * @a: array
 * @n: no. of elements
 * Return: array
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[i]);
	}
	printf("\n");
}
