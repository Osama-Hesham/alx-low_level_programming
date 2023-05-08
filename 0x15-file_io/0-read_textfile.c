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
	char *letter = malloc(sizeof(char) * letters);
	ssize_t readfile;
	ssize_t writefile;

	if (myfile == -1)
	{
		return (0);
	}
	else
	{
		readfile = read(myfile, letter, letters);
		writefile = write(STDOUT_FILENO, letter, readfile);
		free(letter);
		close(myfile);
		return (writefile);
	}
}
