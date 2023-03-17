#include <stdio.h>
/**
 * main - print blablabla
 * Return: blablabla
 */
int main(void)
{
	char c[16] = "0123456789abcdef";
	int i = 0;

	while (i != 16)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
