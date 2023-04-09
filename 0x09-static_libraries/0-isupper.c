#include "main.h"
/**
 * _isupper - uppercase only
 * @c: input
 * Return: output
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else{
		return (0);
	}
}
