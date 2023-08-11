#include <stdio.h>

/**
 * main - solving out
 * print base sixteen numbers using
 * putchar
 * Return: 0 (terminate)
 */
int main(void)
{
	int h = '0';
	int b16 = 'a';

	while (h <= '9')
	{
		putchar(h);
		h++;
	}

	while (b16 <= 'f')
	{
		putchar(b16);
		b16++;
	}

	putchar('\n');

	return (0);
}
