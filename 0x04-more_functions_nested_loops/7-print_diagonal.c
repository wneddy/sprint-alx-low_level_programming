#include "main.h"

/**
 * print_diagonal - drawing a line
 * diagonal line
 * given the prototype function
 * @n : set integer
 * Return: null
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int var1, var2;

		for (var1 = 0; var1 < n; var++)
		{
			for (var2 = 0; var2 < n; var2++)
			{
				if (var2 == var1)
				{
					_putchar('\\');
				}
				else if (var2 < var1)
				{
					_putchar(' ');
				}
				_putchar('\n');
			}
		}
	}
}
