#include "main.h"
/**
 * is_prime_helper - is prime
 * @n: input1
 * @i: input2
 * Return: output
 */
int is_prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return (n == 2);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}

/**
 * is_prime_number - is prime
 * @n: input
 * Return: output
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 2));
	}
}
