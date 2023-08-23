#include "main.h"

/**
 * reverse_array - printing an array
 * in reverse
 * @a: initialized array
 * @n: length of array
 *
 * reverse
 */

void reverse_array(int *a, int n)
{
	int e, d, res;

	d = n - 1;
	for (e = 0; e < n / 2; e++)
	{
		res = a[e];
		a[e] = a[d];
		a[d] = res;
		d--;
	}
}
