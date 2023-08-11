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

	for (h = 0; h < 10; h++)
	{
		putchar(h);
	}
	for (h = 'a'; h < 'g'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
