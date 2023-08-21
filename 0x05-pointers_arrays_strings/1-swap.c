#include "main.h"

/**
 * swap_int - swapping two values
 * @a: int a
 * @b: int b
 * Return: null return
 */

void swap_int(int *a, int *b);
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
