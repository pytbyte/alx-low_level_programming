#include "main.h"
/**
 * main - Function that prints __putchar to the screen
 * Return: 0 always a success
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
