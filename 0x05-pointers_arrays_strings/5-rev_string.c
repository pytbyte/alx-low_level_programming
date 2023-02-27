#include <stdio.h>
/**
 * rev_string - function that reverses a string.
 * @s: declaration of *s and paramters for the function
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int g, _s;
	char character;

	for (g = '\0'; s[g] != 0; g++)
	{
	}
	r_s = 0;
	for (g = g - 1; _s < g; r_s++)
	{
		character = s[g];
		s[g] = s[_s];
		s[_s] = character;
		g--;
	}
}
