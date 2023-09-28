#include "main.h"

/**
 * flip_bits - function to flip bits and returns
 * the no. of bits flipped and get from one number to another
 * @n: 1st no.
 * @m: 2nd no.
 *
 * Return: no. of fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int f = 0;
	unsigned long int v_xor;

	v_xor = n ^ m;

	while (v_xor)
	{
		if (v_xor & 1)
			f++;
		v_xor = v_xor >> 1;
	}
	return (f);
}
