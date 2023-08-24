#include "main.h"

/**
 * leet - encoding of data or string
 * @ch: the declared string
 *
 * encoding
 * Return: the encode
 */

char *leet(char *ch)
{
	int e, d;
	char string[5] = {'a', 'e', 'o', 't', 'l'};
	char code[5] = {'4', '3', '0', '7', '1'};

	for (e = 0; ch[e] != '\0'; e++)
	{
		for (d = 0; d < 5 ; d++)
		{
			if (ch[e] == string[d] || ch[e] == string[d] - 32)
			{
				ch[e] = code[d];
			}
		}
	}
	return (ch);
}
