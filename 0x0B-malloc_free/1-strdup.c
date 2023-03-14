#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *d;
	unsigned int x, count;

	x = 0;
	count = 0;

	if (str == NULL)
		return (NULL);

	while (str[count])
		count++;

	d = malloc(sizeof(char) * (count + 1));

	if (d == NULL)
		return (NULL);

	while ((d[x] = str[x]) != '\0')
		x++;

	return (d);
}
