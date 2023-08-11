#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - checks whether the variable is positive or negative
 * declared variable is passed through the varios conditions
 * Return: 0 (terminate)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
