#include "main.h"

/**
 * print_chessboard - game of chess
 * printing out a chessboard
 * @a: board pointer
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int e, d;

	for (e = 0; e < 8; e++)
	{
		for (d = 0; d < 8; d++)
		{
			_putchar(a[e][d]);
			if (d == 7)
				_putchar('\n');
		}
	}
}
