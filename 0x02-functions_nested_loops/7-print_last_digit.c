#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number.
 * @n: The int to check.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int last_int = n % 10;

	if (last_int < 0)
		last_int *= -1;

	_putchar(last_int + '0');

	return (last_int);
}
