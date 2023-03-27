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

	for (i = 0; i < c; i + 2)
	{
		if (*(ptr + i) != '\0')
		{
		_putchar(*(ptr + i));
		}
	}
	_putchar('\n');
}
