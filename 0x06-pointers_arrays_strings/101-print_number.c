#include "main.h"

/**
 * print_number - printing interger numbers
 * @n: printed integer
 *
 * integer values
 * Return: void
 */

void print_number(int n)
{
	unsigned int val;

	if (n < 0)
	{
		_putchar('-');
		val = n * -1;
	}
	else
	{
		val = n;
	}
	if (val / 10)
	{
		print_number(val / 10);
	}
	_putchar((val % 10) + '0');
}
