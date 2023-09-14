#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function to print numbers passed
 * @separator: check for commas
 * @n: number of elements
 *
 * Return: elements passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ap;

	va_start(ap, n);

	x = 0;
	while (x < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator)
		{
			if (x < (n - 1))
			{
				printf("%s", separator);
			}
		}
		x++;
	}
	va_end(ap);
	printf("\n");
}
