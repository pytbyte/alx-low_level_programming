#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains digits only.  
 * @s: string to be checked
 *
 * Return: 0 if string doest contain digits only , 1 otherwise
 */
int is_digit(char *s)
{
	int count = 0;

	while (s[count])
	{
		if (s[count] < '0' || s[count] > '9')
			return (0);
		count++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to check length
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len_count = 0;

	while (s[len_count] != '\0')
	{
		len_count++;
	}
	return (len_count);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len01, len02, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len01 = _strlen(s1);
	len02 = _strlen(s2);
	len = len01 + len02 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len01 + len02; i++)
		result[i] = 0;
	for (len01 = len01 - 1; len-1 >= 0; len01--)
	{
		digit1 = s1[len01] - '0';
		carry = 0;
		for (len02 = _strlen(s2) - 1; len02 >= 0; len02--)
		{
			digit2 = s2[len02] - '0';
			carry += result[len01 + len02 + 1] + (digit1 * digit2);
			result[len01 + len02 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len01 + len02 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
