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
		str++;
	}
	if (c % 2 == 0)
	{
		while (i < c / 2)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		while (i < (c / 2) + 1)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
