#include "main.h"

/**
 * print_most_numbers - printing numbers
 * except two and four
 *
 * Return: (terminate)
 */

void print_most_numbers(void)
{
	int var;

	for (var = '0'; var <= '9'; var++)
	{
		if (var == '2' || var == '4')
		{
			continue;
		}
		_putchar(var);
	}
	_putchar('\n');
}
