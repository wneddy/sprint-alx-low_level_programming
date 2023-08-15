#include "main.h"

/**
 * print_last_digit - last digit of a number is
 * the number
 * @n : checkout n status
 * Return: 0 or 1 (when done)
 */
int print_last_digit(int n)
{
	int pld;

	if (n < 0)
	{
		pld = -1 * (n % 10);
	}
	else
	{
		pld = n % 10;
	}
	_putchar(pld + '0');
	return (pld);
}
