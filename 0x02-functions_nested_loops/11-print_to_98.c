#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - generating all natuaral numbers
 * separation by commas
 * print in order
 * pass your number to your function
 * @n : on start number
 *
 * Return: null
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
