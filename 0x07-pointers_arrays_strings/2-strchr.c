#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 *
 * @c:  character existance
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
		while (*s != '\0')
		{
		if (*s == c)
		{
			return (s);
		}
		s++;
		}
		if (c == '\0')
		{
			return (s);
		}
		return (NULL);
}
