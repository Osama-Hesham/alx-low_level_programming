#include <stdio.h>
/**
 * main - print blablabla
 * Return: blablabla
 */
int main(void)
{
	int i = 9876543210;
	int x = i % 10;
	i = i / 10

	while (1)
	{
		putchar(x);
		if ( x == 9)
		{
			break;
		}
		i = i / 10;
		x = i % 10;
	}
	putchar('\n');
	return (0);
}
