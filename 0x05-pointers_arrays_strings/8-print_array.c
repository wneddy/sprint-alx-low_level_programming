#include "main.h"


/**
 * print_array - printing n elements of
 * an array of integers
 * @a: declared array
 * @n: elements to print
 *
 * Return: null value
 */
void print_array(int *a, int n)
{
	int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		if (cnt == 0)
		{
			printf("%d", a[cnt]);
		}
		else
		{
			printf(", %d", a[cnt]);
		}
	}
	printf("\n");
}
