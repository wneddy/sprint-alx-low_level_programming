#include "main.h"

/**
 * puts_half - half of the string print
 * @str: set char
 *
 * Return: null return.
 */

void puts_half(char *str)
{
	int cnt = 0, x;

	while (cnt >= 0)
	{
		if (str[cnt] == '\0')
			break;
		cnt++;
	}

	if (cnt % 2 == 1)
		x = cnt / 2;
	else
		x = (cnt - 1) / 2;

	for (x++; x < cnt; cnt++)
		_putchar(str[x]);
	_putchar('\n');
}
