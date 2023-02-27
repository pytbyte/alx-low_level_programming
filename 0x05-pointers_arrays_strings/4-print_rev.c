#include "main.h"
/**
 * rev_string - reverses a string
 * _putchar - print each reveresed string
 * @s: char to check
 *
 * Description: prints last first and first last
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int a = 0, x, y;
	char z;

	while (s[a] != '\0')
	{
		a++;
	}
	y = x - 1;
	for (x = 0; y >= 0 && x < y; y--, x++)
	{
		z = s[x];
		s[x] = s[y];
		s[y] = z;
	}
}
