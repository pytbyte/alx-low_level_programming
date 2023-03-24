#include "variadic_functions.h"

/**
* print_numbers -a function that prints numbers, followed by a new line
*
* Description - a function that prints numbers, followed by a new line
* @separator: the string to be printed between numbers
* @n: number of integers passed to the function
* Return  Null
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int a;
	va_list listed;

	va_start(listed, n);
	for (a = 0; a < n; a++)
		{
		if (!separator)
			printf("%d", va_arg(listed, int));
		else if (separator && n == 0)
			printf("%d", va_arg(listed, int));
		else
			printf("%s%d", separator, va_arg(listed, int));
		}
	va_end(listed);
	printf("\n");
}
