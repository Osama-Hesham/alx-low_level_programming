#include "main.h"
/**
 * rev_string - rev_string
 * @s: string
 * Return: string
 */
void rev_string(char *s)
{
	char temp;
	int c = 0;
	int i;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		temp = s[i];
		s[i] = s[c];
		s[c] = temp;
	}

}
