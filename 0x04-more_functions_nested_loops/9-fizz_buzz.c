#include <stdio.h>
/**
 * main - (fizz-buzz) test program
 * printing one to hundred
 *
 * Return: 0 (terminate)
 */
int main(void)
{
	int var1;

	for (var1 = 1; var1 <= 100; var1++)
	{
		if (var1 == 1)
		{
			printf("%d", var1);
		}
		else
		{
			if ((var1 % 3 == 0) && (var1 % 5 == 0))
			{
				printf(" FizzBuzz");
			}
			else if (var1 % 3 == 0)
			{
				printf(" Fizz");
			}
			else if (var1 % 5 == 0)
			{
				printf(" Buzz");
			}
			else
			{
				printf(" %d", var1);
			}
		}
	}
	putchar('\n');
	return (0);
}
