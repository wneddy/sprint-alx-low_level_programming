#include "stdlib.h"
#include "stdio.h"

/**
 * main - getting the number of min
 * coins to make change of a given
 * amount of money
 * @argc: captured no. cli arguments
 * @argv: storage location of the argumnets
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	if cnts, das = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cnts = atoi(argv[1]);

	while (cnts > 0)
	{
		if (cnts >= 25)
		{
			cnts = cnts - 25;
		}
		else if (cnts >= 10)
		{
			cnts = cnts - 10;
		}
		else if (cnts >= 5)
		{
			cnts = cnts - 5;
		}
		else if (cnts >= 2)
		{
			cnts = cnts - 2;
		}
		else if (cnts >= 1)
		{
			cnts = cnts - 1;
		}
		das = das + 1;
	}

	printf("%d\n", das);
	return (0);
}
