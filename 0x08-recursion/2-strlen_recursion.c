#include "main.h"
/**
 * _strlen_recursion - string size
 * @s: input
 * Return: i
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
