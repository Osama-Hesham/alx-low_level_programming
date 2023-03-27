#include "main.h"

/**
 * char *_strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;
	int i = 0;

	while (*src != '\0')
	{
		c++;
	}
	for (i = 0 ; i < c ; i++)
	{
		dest[i] = src[i];
	}
	dest[c] = '\0';
	return (dest);
}
