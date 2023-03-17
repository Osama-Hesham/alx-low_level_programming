#include <stdio.h>
/**
 * main - print blablabla
 * Return: blablabla
 */
int main(void)
{
	char i = '0';

	while (true)
	{
		if ( i == '9')
		{
			break;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
