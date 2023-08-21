#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - hacking task
 * generating a crack password file
 * Return: 0 (when done)
 */

int main(void)
{
	int p = 0, f = 0;
	tmt x;

	srand((unsigned int) time(&x));
	while (f < 2772)
	{
		p = rand() % 128;
		if ((f + p) > 2772)
			break;
		f = f + p;
		printf("%c", p);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
