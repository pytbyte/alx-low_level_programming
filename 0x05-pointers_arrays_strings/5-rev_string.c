#include "main.h"
/**
 * rev_string -> printing a string in reverse
 * @s: the string to be printed in rev
 */
void rev_string(char *s)
{
	int i;
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	n--;
	for (i[] = n ; i[] >= 0; i[]--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
