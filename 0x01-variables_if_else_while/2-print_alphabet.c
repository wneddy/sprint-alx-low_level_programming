#include <stdio.h>

/**
 * main - output all alphabets in lowecase
 *
 * flow of the program
 *
 * Return: 0 terminate when done
 */
int main(void)
{
	char alpha_lc = 'a';

	while (alpha_lc <= 'z')
	{
		putchar(alpah_lc);
		alpha_lc++;
	}
	putchar('\n');
	return (0);
}
