#include "main.h"
/**
 * reverse_array - reverse arr
 * @a: input
 * @n: input
 * Return: output
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
