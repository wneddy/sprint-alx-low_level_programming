#include "stdio.h"

/**
 * main - printing the program name
 * @argc: counter for arguments
 * @argv: array to store the arguments
 *
 * Return: 0 name of the program
 */

int main(int argc __attribute__((unused)), char **argv)
{

	printf("%s\n", argv[0]);

	return (0);
}
