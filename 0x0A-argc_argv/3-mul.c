#include "stdio.h"
#include "stdlib.h"

/**
 * main - multplying two arguments
 * @argc: counter
 * @argv: storage locater
 *
 * Return: 0 when done
 */

int main(int argc, char **argv)
{
	int d, c, res;

	d = atoi(argv[1]);
	c = atoi(argv[2]);

	if (argc == 2)
	{
		res = d * c;
		printf("%d\n", res);
	}
	else
	{
		return (-1);
	}
	return (0);
}
