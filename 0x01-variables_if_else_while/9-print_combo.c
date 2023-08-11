#include <stdio.h>

/**
 * main - combinationations of numbers
 * using putchar
 * and commas
 * Return: 0 (terminating)
 */
int main(void)
{
	int c;

	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
