#include "main.h"

/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in rev
 */
void print_rev(char *s)
{
	int i;
        int n = 0;
	
	while (*s != '\0')
	{
		n++;
                s++;
	}
	n--;
	for (i = n ; i >= 0; i--)
	{
		s--;
		_putchar(*s);
		
	}
	_putchar('\n');
}
