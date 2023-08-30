#include "main.h"

/**
 * _puts_rev_recursion - printing a string
 * in reverse
 * @s: string to print
 *
 * Return: null
 */

void _puts_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_rev_recursion(s + 1);
		_putchar(*s);
	}
}
