#include "main.h"
/**
 * rev_string - rev_string
 * @s: string
 * Return: string
 */
void rev_string(char *s)
{
	int i = 0;
	int c = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}

	for (c = 0; c < i; c++)
	{
		temp = s[i];
		s[i] = s[c];
		s[c] = temp;
	}

}
