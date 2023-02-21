#include "main.h"

/**
 * _islower - A program that checks if a character is in lowercase.
 * @c : The chararacter on check
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
