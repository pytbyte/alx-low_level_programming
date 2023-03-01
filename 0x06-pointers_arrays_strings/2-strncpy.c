#include "main.h"

/**
 *_strncpy - a function that copies a string
 *
 * @src: source of strings
 * @dest: destination of string
 * @n:  int 
 *
 * Return: pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
