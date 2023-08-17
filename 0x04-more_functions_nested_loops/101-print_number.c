#include "main.h"

/**
 * print_number - our output is integer
 *
 * use the provided prototype
 * only _putchar is allowed
 * no long
 * no arrays or pointers
 * @n : is the value to print
 *
 * Return: (terminate)
 */

void print_number(int n)
{
	unsigned int var1;

	if (n < 0)
	{
		_putchar('-');
		var1 = -1 * n;
	}
	else
	{
		var1 = n;
	}

	if (var1 / 10)
	{
		print_number(var1 / 10);
	}
	_putchar(var1 % 10 + '0');
}
