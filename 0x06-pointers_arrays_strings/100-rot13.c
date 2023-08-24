#include "main.h"

/**
 * rot13 - data encription
 * @d: data to be encrypted
 *
 * encryption
 * Return: encryption
 */

char *rot13(char *d)
{
	int e, w;
	char not_enc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char enc_set[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (e = 0; d[e] != '\0'; e++)
	{
		for (w = 0; w < 52; w++)
		{
			if (d[e] == not_enc[w])
			{
				d[e] = enc_set[w];
				break;
			}
		}
	}
	return (d);
}
