#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to stdout
 * @filename: Name of the file to read
 * @letters: Maximum number of letters to read from the file
 *
 * Return: Number of characters read and printed to stdout, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* Check if filename is NULL */
	if (filename == NULL)
		return (0);

	/* Open the file for reading */
	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	/* Allocate a buffer to hold the file contents */
	char *buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	/* Read up to 'letters' characters from the file into the buffer */
	ssize_t nread = fread(buffer, sizeof(char), letters, fp);
	if (ferror(fp) || nread == 0)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	/* Add a null terminator to the buffer */
	buffer[nread] = '\0';

	/* Write the buffer to stdout */
	ssize_t nwritten = fwrite(buffer, sizeof(char), nread, stdout);
	if (nwritten < nread)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	/* Free the buffer and close the file */
	free(buffer);
	fclose(fp);

	/* Return the number of characters read and written to stdout */
	return (nread);
}
