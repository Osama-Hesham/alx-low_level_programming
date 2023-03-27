#include "main.h"
/**
 * puts_half - print half string
 * @str: string
 * Return: half string
 */
void puts_half(char *str)
{
	int c = 0;
	int i = 0;
	char *ptr = str;

	while (*ptr != '\0')
	{
		c++;
		ptr++;
	}
	if (c % 2 == 0)
	{
		i = c / 2;
		while (i < c)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (c - 1) / 2;
		while (i < c)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
