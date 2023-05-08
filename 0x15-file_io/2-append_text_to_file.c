#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/**
 * append_text_to_file -append text
 * @filename: input
 * @text_content: input
 * Return: output
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int myfile = open(filename, O_WRONLY | O_APPEND);
	int writefile;
	unsigned int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		if (text_content)
		{
			while (text_content[i])
			{
				i++;
			}
		}
		writefile = write(myfile, text_content, i);
		if (writefile == -1 || myfile == -1)
		{
			return (-1);
		}
		close(myfile);
		return (1);
	}
}
