#include "main.h"

/**
 * factorial - basic function
 * fo getting the ! of a number
 * @n: the factorial number
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
