#include "main.h"

/**
 * _strcat - concatetes two strings
 * @dest:char
 * @src:char
 * Return:char concatated
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (s);
}
