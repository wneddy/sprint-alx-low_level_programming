#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: name to print
 * @f: callback function of str
 *
 * Return: nill
 */

void print_name(char *name, void(*f)(char *str))
{
	if (f)
	{
		f(name);
	}
}
