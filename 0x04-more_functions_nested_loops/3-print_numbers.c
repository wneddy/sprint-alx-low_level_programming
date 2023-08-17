#include "main.h"

/**
 * print_numbers - printing numbers
 * using the given prototype
 *
 * Return: (terminate)
 */

void print_numbers(void)
{
	int r;

	for (r = '0'; r <= '9'; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}
