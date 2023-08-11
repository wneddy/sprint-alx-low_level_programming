#include <stdio.h>

/**
 * main - hexadecimal printing all the numbers
 *
 * consider using putchar
 *
 * Return: 0 (terminate)
 */
int main(void)
{
	int h;

	for (h = 0; h <= 9; h++)
	{
		putchar(h);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
