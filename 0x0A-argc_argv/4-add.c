#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
/**
 * main - calculating the summation
 * of a arguments in command line
 * @argc: counter
 * @argv: string holder
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int x, i, res;

	res = 0;
	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (i = 0; argv[x][i]; i++)
			{
				if (!isdigit(argv[x][i]))
				{
					printf("Error\n");
					return (1);
				}
			}
			res += atoi(argv[x]);
		}
		printf("%d\n", res);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
