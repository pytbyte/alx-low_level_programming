#include "main.h"
#include <stdlib.h>
/**
  *argstostr - xoins all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int i, x, y, size;
	char *arg;

	size = 0;
	y = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		x = 0;
		while (av[i][x])
		{
			size++;
			x++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		x = 0;
		while (av[i][x])
		{
			arg[y] = av[i][x];
			x++;
			y++;
		}
		arg[y] = '\n';
		y++;
		i++;
	}
	arg[y] = '\0';
	return (arg);
}
