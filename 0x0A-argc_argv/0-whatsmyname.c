#include "main.h"

/**
 * main - printing the program name
 * @argc: counter for arguments
 * @argv: array to store the arguments
 *
 * Return: 0 name of the program
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		_putchar("Program name: %s\n", *argv[0]);
	}
	else
	{
		_putchar("Program does not exits\n");
	}
	return (0);
}
