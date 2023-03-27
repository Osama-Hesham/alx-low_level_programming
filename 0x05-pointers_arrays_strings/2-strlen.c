#include "main.h"
/**
 * _strlen - counts number of chars
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
