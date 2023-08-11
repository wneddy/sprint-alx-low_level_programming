#include <stdio.h>

/**
 * main - lets print one two ten
 *
 * Return: 0 (terminate)
 */
int main(void)
{
	int p;

	for (p = 0; p < 10; p++)
	{
		printf("%d", p);
	}
	putchar('\n');
	return (0);
}
