#include "main.h"
/**
 * sqrt_helper - sqrt helper
 * @n: input1
 * @guess: input2
 * Return: output
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{	
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, guess + 1));
	}
}
/**
 * _sqrt_recursion - sqrt
 * @n: input 
 * Return: output
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
        	return (-1);
	}
	else
	{
		return (sqrt_helper(n, 0));
	}
}
