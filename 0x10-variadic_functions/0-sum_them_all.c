#include "variadic_functions.h"

/**
 * sum_them_all - function to return sum of all parameters
 * @n: passed no. of arg to get sum
 *
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int res;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	res = 0;
	x = 0;
	while (x < n)
	{
		res += va_arg(ap, int);
		x++;
	}

	va_end(ap);
	return (res);
}
