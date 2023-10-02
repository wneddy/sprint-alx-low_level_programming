#include "main.h"

/**
 * create_file - function to creates a file
 * @filename: a * to filename.
 * @text_content: whats written in the file
 *
 * Return: created file
 */

int create_file(const char *filename, char *text_content)
{
	int file_d;
	int no_letters;
	int per;

	if (!filename)
		return (-1);
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (no_letters = 0; text_content[no_letters]; no_letters++)
		;
	per = write(file_d, text_content, no_letters);
	if (per == -1)
		return (-1);
	close(file_d);
	return (1);
}
