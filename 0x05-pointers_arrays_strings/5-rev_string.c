#include "main.h"

/**
 * rev_string - reverses a string
 * @s: set character
 *
 * Return: null value.
 */

void rev_string(char *s)
{
	int cnt, start, stop, counters, size;

	cnt = 0;
	while (s[cnt] != '\0')
	{
		cnt++;
	}
	size = cnt;
	stop = size - 1;

	for (start = 0; start < stop; start++)
	{
		counters = s[start];
		s[start] = s[stop];
		s[stop] = counters;
		stop--;
	}
}
