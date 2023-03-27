#include "main.h"
/**
 * _strlen - counts number of chars
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != NULL)
	{
		s++;
		i++;
	}
	return (i);
}
