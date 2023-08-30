#include "main.h"

/**
 * root_check - basic go getter for the square root
 * @p: comparison digit
 * @b: base check
 *
 * Return: square root of b
 */

int root_check(int p, int b)
{
	if (p * p == b)
	{
		return (p);
	}
	if (p * P > b)
	{
		return (-1);
	}
	return (root(p + 1, b));
}

/**
 * _sqrt_recursion - getting the square root of a
 * given number
 * @n: given no.
 *
 * Return: square root on no. ((n))
 */

int _sqrt_recursion(int n)
{
	return (root(1, n));
}
