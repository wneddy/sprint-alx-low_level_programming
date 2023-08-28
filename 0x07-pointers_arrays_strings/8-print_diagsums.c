#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of diagnols
 * @a: set of matrix
 * @size: magnitude
 *
 * Return: null(void)
 */

void print_diagsums(int *a, int size)
{
	int e;
	int val1 = 0, val2 = 0;

	for (e = 0; e < (size * size); e += size + 1)
	{
		val1 += a[e];
	}
	for (e = (size * size) - size; e > 0; e -= (size - 1))
	{
		val2 += a[e];
	}
	printf("%d, %d\n", val1, val2);
}
