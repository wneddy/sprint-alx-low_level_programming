#include "main.h"

/**
 * print_alphabet_x10 - printing alphabets ten times
 * in lowercase
 * followed by a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	char h;
	int x = 0;

	while (x < 10)
	{
		h = 'a';
		while (h <= 'z')
		{
			_putchar(h);
			h++;
		}
		_putchar('\n');
		x++;
	}

}
