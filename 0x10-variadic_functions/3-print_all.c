#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function to act like printf
 * @format: format specifiers
 *
 * Return: output
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *arr, *spt; /* arr - string, spt - separator */
	int x;

	va_start(ap, format);
	x = 0;
	while (format && format[x])
	{
		spt = "";
		if (format[x + 1])
			spt = ", ";
		switch (format[x])
		{
		case 'c':
			printf("%c%s", va_arg(ap, int), spt);
			break;
		case 'i':
			printf("%d%s", va_arg(ap, int), spt);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double), spt);
			break;
		case 's':
			arr = va_arg(ap, char *);
			if (!arr || !*arr)
			{
				arr = "(nil)";
			}
			printf("%s%s", arr, spt);
			break;
		}
		x++;
	}
	va_end(ap);
	printf("\n");
}
