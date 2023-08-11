#include <stdio.h>
#include <stdlib.h>

/**
 * main - lets print one to ten
 *
 * while was the name
 *
 * Return: 0 terminate at 10
 */
int main(void)
{
	int g = 0;

	while (g < 10)
	{
		printf("%d", g);
		g++;
	}
	putchar('\n')

	return (0);
}
