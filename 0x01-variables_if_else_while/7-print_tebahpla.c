#include <stdio.h>

/**
 * main - getting a to z in reverse
 *
 * using putchar
 *
 * Return: 0 (done)
 */
int main(void)
{
	char p = 'z';

	while (p >= 'a')
	{
		putchar(p);
		p--;
	}
	putchar('\n');
	return (0);
}
