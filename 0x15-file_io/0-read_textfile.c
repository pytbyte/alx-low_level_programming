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

	ssize_t nwritten = fwrite(buffer, sizeof(char), nread, stdout);

	if (nwritten < nread)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	free(buffer);
	fclose(fp);

	return (nread);
}

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
