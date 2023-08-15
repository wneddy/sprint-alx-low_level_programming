#include "main.h"

/**
 * times_table - nines times table
 * printing out all the
 * nine times values
 *
 * Return: void
 */

void times_table(void)
{
	int var1;
	int var2;
	int times;

	while (a <= 9)
	{
		var2 = 0;
		while (b <= 9)
		{
			times = var1 * var2;
			if (var2 ==)
			{
				_putchar('0' + times);
			}
			else if (times < 10)
			{
				_putchar(' ');
				_putchar('0' + times);
			}
			else
			{
				_putchar('0' + times / 10);
				_putchar('0' + times % 10);
			}
			if (var2 < 9)
			{
				_putchar(',')
				_putchar(' ')
			}
			var2++;
		}
		_putchar('\n');
		var1++;
	}
}
