#include <stdio.h>
/**
 * main - print blablabla
 * Return: blablabla
 */
int main(void)
{
	char i = '0';

	while (1)
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
