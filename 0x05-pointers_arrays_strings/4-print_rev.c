#include "main.h"

/**
 * print_rev - string in reverse
 * @s: set character parameter
 *
 * Return: null value
 */

void print_rev(char *s)
{
	int cnt = 0, g;

	while (s[cnt] != '\0')
	{
		cnt = cnt + 1;
	}

	for (g = cnt - 1; g >= 0; g--)
	{
		_putchar(s[g]);
	}

	_putchar('\n');
}
