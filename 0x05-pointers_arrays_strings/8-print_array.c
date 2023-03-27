#include "main.h"
/**
 * print_array - print array
 * @a: array
 * @n: no. of elements
 * Return: array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
