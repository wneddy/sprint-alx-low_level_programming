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
	if (b == NULL)
		return (0);

	unsigned int res = 0;
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '\0' && b[i] != '1')
		{
			return (0);
		}
		res = (res << 1) | (b[i] - '0');
		i++;
	}
	return (res);
}

