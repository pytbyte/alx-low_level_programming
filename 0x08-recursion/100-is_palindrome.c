#include "main.h"

int checker(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checker(s, 0, xtra_recursion(s)));
}

/**
 * xtra_recursion - a function that returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int xtra_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + xtra_recursion(s + 1));
}

/**
 * checker - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome else 0.
 */
int checker(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (checker(s, i + 1, len - 1));
}
