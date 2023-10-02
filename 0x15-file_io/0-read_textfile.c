#include "main.h"

/**
 * read_textfile - function reads text file and prints it to POSIX stdout.
 * @filename: a * to file nsme
 * @letters: no. of letters to read & print
 *
 * Return: POSIX stdout
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t e, d, a;
	char *space;

	if (filename == NULL)
		return (0);

	space = malloc(sizeof(char) * letters);
	if (space == NULL)
		return (0);
	/*e-open, d-read, a-write*/
	e = open(filename, O_RDONLY);
	d = read(e, space, letters);
	a = write(STDOUT_FILENO, space, d);

	if (e == -1 || d == -1 || a == -1 || a != d)
	{
		free(space);
		return (0);
	}

	free(space);
	close(e);

	return (a);
}
