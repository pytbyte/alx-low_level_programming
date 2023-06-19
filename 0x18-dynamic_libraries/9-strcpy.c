#include "main.h"

/**
 * *_strcpy -  copies target string in src
 * @dest: char type string
 * @src: char type string
 * Description: Copy target string pointed to by pointer `src` to `dest`
 * Return: Pointer to `dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
