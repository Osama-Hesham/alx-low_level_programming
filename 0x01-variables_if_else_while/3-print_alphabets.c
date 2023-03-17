#include <stdio.h>
/**
 * main - print alphabets
 * Return: alphabets
 */
int main(void)
{
	char c[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i != 52)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
