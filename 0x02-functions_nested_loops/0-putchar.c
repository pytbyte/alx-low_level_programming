#include "main.h"
/*
 *
 * C file : Prints  _putchar and returns "0"
 * authour: Kamau Macharia
 *
 */

int main(void)
{
	/* create variable to be printed */
	char *info = "_putchar";

	/* while loop to print every character */
	while (*info)
	{	
		_putchar(*info);
		info++;
	}
	_putchar('\n');

	return (0);
}

