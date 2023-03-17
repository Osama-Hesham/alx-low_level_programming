#include <stdio.h>
/**
 * main - print blablabla
 * Return: blablabla
 */
int main(void)
{
	char c[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;

	while (i != 26)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
