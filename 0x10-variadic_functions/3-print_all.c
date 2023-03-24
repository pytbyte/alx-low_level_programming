#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *str;
	const char *sep = "";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
}
	while (g_format[j].type)
	{
	if (*(g_format[j].type) == format[i])
			{
					printf("%s", sep);
					str = g_format[j].f(args);
					printf("%s", str);
					sep = ", ";
					free(str);
					break;
				}
				j++;
	}
	i++;
	}
	printf("\n");
	va_end(args);
}
