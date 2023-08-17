#include <stdio.h>

/**
 * main - getting the largest prime
 * number
 *
 * Return: 0 to terminate
 */

int main(void)
{
	long int var, fctr, mx;

	var = 612852475143;
	fctr = 2;
	mx = 1;

	while (var > 1)
	{
		if (var % fctr == 0)
		{
			var = var / fctr;
			mx = fctr;
		}
		else
		{
			fctr++;
		}
	}
	printf("%ld\n", mx);

	return (0);
}
