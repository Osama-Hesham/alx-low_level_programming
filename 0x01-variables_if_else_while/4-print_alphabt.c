#include <stdio.h>
/**
 * main - prints alph
 * Return: alph
 */
int main(void)
{
	char c[24] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (i != 24)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
