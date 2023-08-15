#include "main.h"

/**
 * jack_bauer - jack bauer timelines
 * use the given time set
 *
 */
void jack_bauer(void)
{
	int y;
	int d;

	y = 0;

	while (y < 24)
	{
		d = 0;
		while (d < 60)
		{
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar(':');
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			_putchar('\n');
			d++;
		}
		y++;
	}
}
