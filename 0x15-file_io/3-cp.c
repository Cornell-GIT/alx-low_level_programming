#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int filedesc);

/**
 * create_buffer - this function allocates 1024 bytes for a buffer
 * @file: name of the file buffer
 *
 * Return: output newly allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - this function closes the file descriptors
 * @filedesc: file descriptor for the function
 */

void close_file(int filedesc)
{
	int c;

	c = close(filedesc);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close filedesc %d\n", filedesc);
		exit(100);
	}
}

/**
 * main - this function copies the file contents to another file
 * @argc: number of arguments supplied to the function
 * @argv: array of pointers to the function arguments
 *
 * Return: 0 on success.
 *
 * if the number of argument is not the correct one, exit with code 97
 * if file_from does not exist, or if you can not read it, exit with code 98
 * if you can not create or if write to file_to fails, exit with code 99
 * if you can not close a file descriptor , exit with code 100
 */

int main(int argc, char *argv[])
{
	int fromFile, toFile, rd, wrt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fromFile = open(argv[1], O_RDONLY);
	rd = read(fromFile, buffer, 1024);
	toFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fromFile == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wrt = write(toFile, buffer, rd);
		if (toFile == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(fromFile, buffer, 1024);
		toFile = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(fromFile);
	close_file(toFile);

	return (0);
}
