#include "main.h"

/**
*_strncat -concatates strings using n bytes
*@dest:char
*@src:char
*@n:int
*Return:char concatated
*/
char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;
	int x;
	int y;
	y = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		for (x = 0; src[x] != '\0' && x < n; x++)
		{
			dest[y] = src[x];
		}
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
