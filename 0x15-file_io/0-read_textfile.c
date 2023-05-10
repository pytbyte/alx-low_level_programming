#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return:  0 if fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_file, readable_file, written_file;
	char *buffer_zone;

	if (filename == NULL)
		return (0);

	buffer_zone = malloc(sizeof(char) * letters);
	if (buffer_zone == NULL)
		return (0);

	open_file = open(filename, O_RDONLY);
	readable_file = read(open_file, buffer_zone, letters);
	written_file = write(STDOUT_FILENO, buffer_zone, readable_file);

	if (open_file == -1 || readable_file == -1 || written_file == -1
	|| written_file != readable_file)
	{
		free(buffer_zone);
		return (0);
	}

	free(buffer_zone);
	close(open_file);

	return (written_file);
}
