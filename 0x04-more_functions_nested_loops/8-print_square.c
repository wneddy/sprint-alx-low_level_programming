#include "main.h"

/**
 * print_square - printing a square
 * in a termianl followed by a line
 * given the prototype function
 * @size: given size of the square
 *
 * Return: no return value
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int var1, var2;

		for (var1 = 0; var1 < size; var1++)
		{
			for (var2 = 0; var2 < size; var2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
