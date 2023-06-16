#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t alphabet;

	for (alphabet = 0; str[alphabet]; alphabet++)
		;
	return (alphabet);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int target_file;
	ssize_t content_length;

	if (filename == NULL)
		return (-1);
	target_file = open(filename, O_WRONLY | O_APPEND);
	if (target_file == -1)
		return (-1);
	if (text_content != NULL)
		content_length = write(target_file, text_content, _strlen(text_content));
	close(target_file);
	if (content_length == -1)
		return (-1);
	return (1);
}

