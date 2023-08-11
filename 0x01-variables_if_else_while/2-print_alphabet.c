#include <stdio.h>

/**
 * main - outpting (a..z) in lowercase
 *
 * Return: 0 when done
 */
int main(void)
{
	char alphabet_lc = 'a';

	while (alphabet_lc <= 'z')
	{
		putchar(alphabet_lc);
		alphabet_lc++;
	}
	putchar("\n");

	return (0);
}
