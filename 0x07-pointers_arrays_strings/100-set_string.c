#include "main.h"

/**
 * set_string - address manipulation
 * pointing to a set address
 * @s: address to point from
 * @to: address to point to
 *
 * Return: null
 */

void set_string(char **s, char *to)
{
	*s = to;
}
