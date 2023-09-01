#include "stdio.h"

/**
 * main - printing no. of arguments entered
 * @argv: array to store the values
 * @argc: counter
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	(void)**argv;

	printf("%d\n", argc - 1);

	return (0);
}
