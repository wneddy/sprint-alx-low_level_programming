#include "stdio.h"

/**
 * main - printing arguments passed
 * @argc: counter
 * @argv: storage location
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int d;

	for (d = 0; d < argc; d++)
	{
		printf("%s\n", argv[d]);
	}

	return (0);
}
