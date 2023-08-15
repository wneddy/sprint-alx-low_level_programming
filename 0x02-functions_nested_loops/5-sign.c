#include "main.h"

/**
 * print_sign - printing sign of numbers
 * @n : check status of n
 * if n is gt zero print +ve
 * if n is less than zero put zero
 * if n is lt zero print -ve
 * Return: 0 or 1 for either success
 */
int print_sign(int n)
{
	int check;

	if (n > 0)
	{
		check = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		check = 0;
		_putchar('0');
	}
	else
	{
		check = -1;
		_putchar('-');
	}

	return (check);
}
