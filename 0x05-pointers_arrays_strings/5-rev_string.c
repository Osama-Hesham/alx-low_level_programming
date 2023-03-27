#include "main.h"
/**
 * rev_string - rev_string
 * @s: string
 * Return: string
 */
void rev_string(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}
	while (i != 0)
	{
		_putchar(s[i]);
		i--;
	}
}
