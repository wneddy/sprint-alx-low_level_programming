#include <stdio.h>

/**
 * main - printing first 50 fibonacci numbers
 * separate by commas
 * followed by space
 * allowed to use lib
 * Return: (termiante)
 */
int main(void)
{
	long int e, d, a, rel;

	d = 1;

	a = 2;

	for (e = 1; e <= 50; ++e)
	{
		if (d != 20365011074)
		{
		printf("%ld, ", d);
		}
		else
		{
			printf("%ld\n", d);
		}
		rel = d + a;
		d = a;
		a = rel;
		}

	return (0);
}
