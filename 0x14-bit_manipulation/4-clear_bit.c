#include "main.h"

/**
 * clear_bit - function that clears a bit
 * at a certain index
 * @n: no. to clear
 * @index: position
 *
 * Return: success else fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int move;
	unsigned int s = sizeof(*n) * 8 - 1;

	if (index > s)
		return (-1);
	move = ~(1 << index);
	*n = *n & move;

	return (1);
}
