#include "main.h"

/**
 * get_bit - function to get bit values at
 * a set index
 * @n: no. of bits
 * @index: position
 *
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;
	unsigned int move_bits;

	move_bits = sizeof(n) * 8 - 1;
	if (index > move_bits)
		return (-1);
	val = (n >> index) & 1;

	return (val);
}
