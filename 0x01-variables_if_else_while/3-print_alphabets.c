#include <stdio.h>

/**
 * main - both lower and upper are alphabets are
 * okay
 *
 * lower and upper declared
 *
 * Return: 0 terminate when done
 */

int main(void)
{
	char alpha_upper = 'A';
	char alpha_lower = 'a';

	while (alpha_lower <= 'z')
	{
		putchar(alpha_lower);
		alpha_lower++;
	}
	while (alpha_upper <= 'Z')
	{
		putchar(alpha_upper);
		alpha_upper++;
	}
	putchar('\n');
	return (0);
}
