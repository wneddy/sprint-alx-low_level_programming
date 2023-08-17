#include "main.h"

/**
 * more_numbers - printing on to fourteen
 * ten times
 * given the prototype function
 *
 * Return: null
 */

void more_numbers(void)
{
	int var1, x, s;

	for (x = 0; x < 10; x++)
	{
		for (var1 = 0; var1 <= 14; var1++)
		{
			s = var1;
			if (s > 9)
			{
				int var2;

				var2 = s / 10;
				_putchar(var2 + '0');
				s = s % 10;
			}
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
