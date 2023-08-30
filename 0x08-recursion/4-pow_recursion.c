#include "main.h"

/**
 * _pow_recursion - getting the power of a number
 * @x: value to raise
 * @y: increase power value
 *
 * Return: power of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
