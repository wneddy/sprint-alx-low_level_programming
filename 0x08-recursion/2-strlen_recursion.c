#include "main.h"

/**
 * _strlen_recursion - calculating the length
 * of a string using the rercusion method
 * @s: the string to count
 *
 * Return: value
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
