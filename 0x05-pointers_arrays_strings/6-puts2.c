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

	while (*str != '\0')
	{
		c++;
		str++;
	}

	while (i < c)
	{
		if (*(ptr + i) != '\0')
		{
		_putchar(*(ptr + i));
		}
		i = i + 2;
	}
	_putchar('\n');
}
