#include "main.h"

/**
 * set_bit - function that sets bit to
 * a certain index
 * @n: value to set
 * @index: bit index to set
 *
 * Return: 1 for success, -1 for fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s = sizeof(*n) * 8 - 1;

	if (index > s)
		return (-1);
	*n = *n | (1 << index);

	return (1);
}
