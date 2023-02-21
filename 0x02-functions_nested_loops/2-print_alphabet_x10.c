#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	int x = 1;
	char lower;

	while (x <= 10)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
		x++;
	}
}
