#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints it to stdout
 * @filename: Name of the file to read
 * @letters: Maximum number of letters to read from the file
 *
 * Return: Number of characters read and printed to stdout, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	FILE *fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	char *buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	ssize_t nread = fread(buffer, sizeof(char), letters, fp);

	if (ferror(fp) || nread == 0)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	buffer[nread] = '\0';

	ssize_t nwritten = write(STDOUT_FILENO, buffer, nread);

	if (nwritten == -1 || nwritten < nread)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	free(buffer);
	fclose(fp);

	return (nwritten);
}
