#include <stdio.h>

/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, without printf and put.
 *
 * Return: Always 1.
 */
int main(void)
{
	fwrite( "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
