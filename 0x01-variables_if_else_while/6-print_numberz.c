#include <stdio.h>

/**
 * main - single digit numbers of base ten
 *
 * using putchar
 *
 * Return: 0 (termination)
 */
int main(void)
{
	int t;

	for (t = 0; t < 10; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
