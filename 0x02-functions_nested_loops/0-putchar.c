#include "main.h"
/*
 *
 * C file : Prints  _putchar and returns "0"
 * authour: Kamau Macharia
 *
 * return 0
 *
 */
 


int main(void)
{
	/* create variable containing all the characters in the info */
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

