#include "main.h"

/**
 * infinite_add - addition of two
 *numbers.
 * @n1: 1st number.
 * @n2: 2ndnumber.
 * @r: output
 * @size_r: output size.
 *
 * Return: output of the program
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int plus = 0, val1, val2, e, d;

	for (val1 = 0; n1[val1]; val1++)
	;
	for (val2 = 0; n2[val2]; val2++)
		;
	if (val1 > size_r || val2 > size_r)
	return (0);
	val1--;
	val2--;
	size_r--;

	for (e = 0; e < size_r; e++, val1--, val2--)
	{
		if (len1 >= 0)
			plus += n1[val1] - '0';
		if (val2 >= 0)
			plus += n2[val2] - '0';
		if (val1 < 0 && val2 < 0 && plus == 0)
			break;
		r[e] = plus % 10 + '0';
		plus /= 10;
	}

	r[e] = '\0';

	if (val1 >= 0 || val2 >= 0 || plus)
	return (0);

	for (e--, d = 0; e > d; e--, d++)
	{
		plus = r[e];
		r[e] = r[d];
		r[d] = plus;
	}

	return (r);
}

