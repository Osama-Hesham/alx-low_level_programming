#include "main.h"
/**
 * print_rev - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void print_rev(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	while (i != -1)
	{
		_putchar(*str);
		i--;
		str--;
	}
	_putchar('\n');
}
