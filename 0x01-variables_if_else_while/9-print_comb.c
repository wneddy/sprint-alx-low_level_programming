#include <stdio.h>

/**
 * main - lets get our combination
 * separate with commas
 * use putchar
 * Return: 0 (terrminate)
 */
int main(void)
{
	int c;

	for (c = '0'; c < '9'; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
