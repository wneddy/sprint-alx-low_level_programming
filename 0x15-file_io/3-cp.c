#include "main.h"

/**
 * error_file - check for stae of the file
 * if open
 * @file_from: file from where.
 * @file_to: file to where.
 * @argv: args vec.
 * Return: no return.
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Holberton School students check code.
 * @argc: no. of args
 * @argv: args vec.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int f_from, f_to, err_exit;
	ssize_t no_chars, per;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(f_from, f_to, argv);
	no_chars = 1024;
	while (no_chars == 1024)
	{
		no_chars = read(f_from, buff, 1024);
		if (no_chars == -1)
			error_file(-1, 0, argv);
		per = write(f_to, buff, no_chars);
		if (per == -1)
			error_file(0, -1, argv);
	}
	err_exit = close(f_from);
	if (err_exit == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	err_exit = close(f_to);
	if (err_exit == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	return (0);
}
