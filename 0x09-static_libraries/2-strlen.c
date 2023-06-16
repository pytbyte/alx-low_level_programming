#include "main.h"

/**
 *_strlen - Count characters in a string
 *@s: String checked
 *
 *Return: The size of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != 0)
	{
		count++;
	}
	return (count);
}
