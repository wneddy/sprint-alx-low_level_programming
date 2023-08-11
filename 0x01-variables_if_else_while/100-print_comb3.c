#include <stdio.h>

/**
 * main - possible combination of two different digits
 *
 * separate no.s with commas
 * combination must be different
 * print only the smallest combination
 * consider ascending order
 * use putchar, max is five times
 * not allowed char
 *
 * Return: 0 (terminate)
 */
int main(void)
{
	int e, d, a;

	a = '0';

	for (e = '0'; e <= '9'; e++)
	{
		for (d = e + 1; d <= '9' ; d++)
		{
			if (a > '0')
			{
				putchar(',');
				putchar(' ');
			}
			a++;
			putchar(e);
			putchar(d);
		}
	}
	putchar('\n');

	return (0);
}
