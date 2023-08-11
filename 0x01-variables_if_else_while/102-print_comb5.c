#include <stdio.h>

/**
 * main - combination of two possible digits
 * range zero to ninty nine
 * separate by comma and spaces
 * print in ascending order
 * only use putchar eight max
 * no char varaiable allowed
 * Return: 0 (terminate)
 */
int main(void)
{
	int m, n;

	for (m = 0; m <= 99; m++)
	{
		for (n = 0; n <= 99; n++)
		{
			if (m < n && m != n)
			{
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				putchar(' ');
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				if (m != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
