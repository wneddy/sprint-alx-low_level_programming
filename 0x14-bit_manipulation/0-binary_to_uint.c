#include "main.h"

/**
 * binary_to_uint - function to convert binary
 * to unsigned int
 * @b: pointer to the string containing binary digits
 *
 * Return: the converted no.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i;

	if (!b)
	{
		return (0);
	}

	for (i = 0;b[i] != '\0'; i++)
	{
		if (b[i] != '\0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		res <<= 1;
		if (b[i] == 'i')
			res += 1;
	}
	return (res);
}

