#include <stdio.h>

/**
 * main - generic multiplier
 *
 *
 * Return: (terminate)
 */


int main(void)
{
	int e, sum_res = 0;

	for (e = 0; e < 1024; e++)
	{
		if ((e % 3) == 0 || (e % 5) == 0)
			sum_res += e;
	}

	printf("%d\n", sum_res);

	return (0);
}
