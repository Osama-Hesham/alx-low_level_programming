#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * argstostr - concat all args
 * @ac: input
 * @av: input
 * Return: output
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *str = malloc(sizeof(char) * ac * strlen(*av) + 1);
	int cnt1 = 0;
	int cnt2 = 0'

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av[i][j]; j++)
		{
			cnt1++;
		}
	}

	cnt1 += ac;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av[i][j]; j++)
		{
			str[cnt2] = av[i][j];
			cnt2++;
		}
		if (str[cnt2] == '\0')
		{
			str[cnt2] = '\n';
			cnt2++;
		}
	}
	return (str);
}
