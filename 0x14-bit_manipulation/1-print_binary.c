#include "main.h"

/**
 * print_binary - function to print binary of
 * a number.
 * @n: no. to convert
 *
 */

void print_binary(unsigned long int n)
{
	signed long int ndx;
	unsigned long int move;

	if (n = 0)
	{
		_putchar('0');
		return;
	}
	ndx = sizeof(n) * 8 - 1;
	while (ndx >= 0)
	{
		move = n >> ndx;
		ndx--;
		if (move & '1')
		{
			_putchar('1');
			break;
		}
	}
	while (ndx >= 0)
	{
		move = n >> ndx;
		if (move & 1)
			_putchar('1');
		else
			_putchar('0');
		ndx--;
	}
}
