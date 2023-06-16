#include "main.h"

/**
 *print_alphabet - prints the alphabet in lowercase followed by a new line
 *
 *Return: void
 */
void print_alphabet(void)
{
	char leta;

	for (leta = 'a'; leta <= 'z'; leta++)
	{
		_putchar(leta);
	}
	_putchar('\n');
}
