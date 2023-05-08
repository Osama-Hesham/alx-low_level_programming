#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/**
 * create_file - create file
 * @filename: input
 * @text_content: input
 * Return: output
 */
int create_file(const char *filename, char *text_content)
{
	int myfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	unsigned int i = 0;
	int writefile;

	if (filename == NULL)
	{
		return (-1);
	}
	while (text_content[i])
	{
		i++;	
	}
	writefile = write(myfile, text_content, i);
	if (writefile == -1 || myfile == -1)
	{
		return (-1);
	}
	close(myfile);
	return (1);
}
