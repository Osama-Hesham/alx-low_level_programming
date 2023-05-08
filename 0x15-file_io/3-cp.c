#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/**
 * main - copy file
 * @argc: input
 * @argv: input
 * Return: output
 */
int main(int argc, char *argv[])
{
	char *letter = malloc(sizeof(char) * 1024);
	int writefile, readfile, file1, file2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file1 file2\n", argv[0]);
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((readfile = read(file1, letter, 1024)) > 0)
	{
		writefile = write(file2, letter, readfile);
		if (writefile != readfile)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(file1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (close(file2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
}
