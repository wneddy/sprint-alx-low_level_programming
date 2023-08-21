#include "main.h"

/**
 * puts2 - printing out character of a string
 * @str: set character
 *
 * Return: null value
 */
void puts2(char *str)
{
	int cnt = 0;

	while (str[cnt] != '\0')
	{
		if (cnt % 2 == 0)
		{
			_putchar(str[cnt]);
		}
		cnt++;
	}
	_putchar('\n');
}
