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
	char alpha_upper = 'a';
	char alpha_lower = 'A';

	while (alpha_upper <= 'Z')
	{
		putchar(alpha_upper);
		alpha_upper++;
	}

	while (alpha_lower <= 'z')
	{
		putchar(alpha_lower);
		alpha_lower++;
	}

	putchar('\n');
	return (0);
}
