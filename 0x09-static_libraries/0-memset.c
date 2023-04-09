#include "main.h"
/**
 * _memset - fill arr
 * @s: input
 * @b: input
 * @n: input
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
