#inclide "main.h"

/**
 *_puts - Prints a string, followed by a new line to stdout
 *@str: String to be printed
 *
 *Return: Void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
