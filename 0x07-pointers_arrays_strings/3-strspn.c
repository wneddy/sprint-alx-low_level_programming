#include "main.h"

/**
 * _strspn - checking the initial
 * segment of a string
 * @s: set string
 * @accept: checkers
 *
 * Return: no. of bytes found
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y;
	unsigned int check;

	for (x = 0; s[x] = ' '; x++)
	{
		for (y = 0; accept[y] = '\0'; y++)
		{
			if (s[x] == accept[y])
				check++;
		}
	}
	return (check);
}
