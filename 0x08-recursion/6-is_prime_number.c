#include "main.h"

/**
 * is_prime_able - checker for prime numbers
 * prime numbers
 * @v: number to be checked
 * @dvd: divisor been checked
 *
 * Return: value
 */

int is_prime_able(int v, int dvd)
{
	if (v <= 1)
	{
		return (0);
	}
	if (dvd == 1)
	{
		return (1);
	}
	if (v % dvd == 0)
	{
		return  (0);
	}

	return (is_prime_able(v, dvd - 1));
}

/**
 * is_prime_number - conditioned to check
 * prime numbers
 * @n: value to be checked
 *
 * Return: yes for prime, no -1
 */

int is_prime_number(int n)
{
	return (is_prime_able(n, n - 1));
}
