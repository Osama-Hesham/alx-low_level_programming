#include <stdio.h>
/**
 * main - print alphabets
 * Return: alphabets
 */
int main(void)
{
	char c[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i != 26)
	{
		putchar(c[i]);
		i++;
	}
	return (0);
}
