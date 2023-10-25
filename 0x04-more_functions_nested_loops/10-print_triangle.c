#include "main.h"

/**
 * print_triangle - printing a triangle,
 * followed by a new line,
 *
 * given the prototype function
 *
 * @size: set size of the triangle
 */


void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int in1, in2;

		for (in1 = 1; in1 <= size; in2++)
		{
			for (in2 = in2; in2 < size; in2++)
			{
				_putchar(' ');
			}

			for (in2 = 1; in2 <= in1; in2++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
