#include <stdio.h>
/**
 * main - print alphabets
 * Return: alphabets
 */
int main(void)
{
	char c[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(c[i]);
	}
	return (0);
}
