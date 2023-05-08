#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/**
 * read_textfile - read file
 * @filename: input
 * @letters: input
 * Return: output
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t myfile = open(filename, O_RDONLY);
	
	if (myfile == NULL)
	{
		return (0);
	}
	else
	{
		free(malloc(sizeof(char) * letters));
		close(myfile);
		return(write(STDOUT_FILENO, malloc(sizeof(char) * letters), read(fd, buf, letters)));
	}
}
