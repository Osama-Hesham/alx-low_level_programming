#include "main.h"
/**
 * puts2 - print every 2 chars
 * @str: string
 * Return: every 2 chars
 */
void puts2(char *str)
{
	int c = 0;
	int i;
	char *ptr = str;

	while (*ptr != '\0')
	{
		c++;
		ptr++;
	}

	while (i < c)
	{
		if (*str != '\0')
		{
		_putchar(str[i]);
		}
		i = i + 2;
	}
	_putchar('\n');
}
