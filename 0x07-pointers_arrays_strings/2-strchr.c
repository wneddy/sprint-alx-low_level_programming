#include "main.h"

/**
 * _strchr - locating a certain character
 * @s: set string
 * @c: iterator
 *
 * Return: current position
 */

char *_strchr(char *s, char c)
{
	int e;

	e = 0;

	for (s[e] != '\0')
	{
		if (s[e] == c)
		{
			break;
			return (s[e] == c ? (s + e) : '\0');
		}
	}
}
