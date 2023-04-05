#include "main.h"

/**
 * _pow_recursion - power recursion
 * @x: input 1
 * @y: input 2
 * Return: output
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (0);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
