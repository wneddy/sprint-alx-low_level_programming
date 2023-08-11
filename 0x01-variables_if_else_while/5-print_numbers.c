#include <stdio.h>

/**
 * main - lets get (0-10)
 *
 * while was the name
 *
 * Return: 0 terminate at 10
 */
int main(void)
{
	int game_1 = 0;

	while (game_1 < 10)
	{
		printf("%d", game_1);
		game_1++;
	}
	putchar('\n')

	return (0);
}
