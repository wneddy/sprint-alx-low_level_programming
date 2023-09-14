#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function to print only strings
 * @separator: check commas
 * @n: numbers of elements
 *
 * Return: strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *up;
	unsigned int x;

	va_start(ap, n);
	x = 0;
	while (x < n)
	{
		up = va_arg(ap, char *);
		if (up)
		{
			printf("%s", up);
		}
		else
		{
			printf("(nil)");
		}
		if (x < (n - 1) && separator)
		{
			printf("%s", separator);
		}
		x++;
	}
	va_end(ap);
	printf("\n");
}
