#include "main.h"

/**
 * print_line - drawing a straight
 * line in the terminal
 * @n : set integer
 * given the prototype function
 *
 * Return: 0 (terminate)
 */

void print_line(int n)
{
	if (n > 0)
	{
		int var1;

		for (var1 = 0; var1 < n; var1++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
