#include "main.h"

/**
 * print_alphabet - printing output
 * used the prototype function
 * output in lower function
 *
 */
void print_alphabet(void)
{
	char alpha_b;

	for (alpha_b = 'a'; alpha_b <= 'z'; alpha_b++)
		_putchar(alpha_b);
	_putchar('\n');
}
