#include "main.h"

int base_sqrt_recursion(int n, int i);

/**
 * base_sqrt_recursion - a function that returns the square root of a number
 * @n: number to  check sq root
 *
 * Return: square root obtained
 */
int base_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (base_sqrt_recursion(n, 0));
}

/**
 * _sqrt_recursion - This recurses to find the square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
