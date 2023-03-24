#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list listed;

	va_start(listed, n);

	for (i = 0; i < n; i++)
	{
	if (!str)
	
		str = "(nill)";
	if (!separator)
		printf("%s", str);
	else if (separator && i == 0)
		printf("%s", str);
	else
		printf("%s", separator);
	}
	printf("\n");
	va_end(listed);
}
