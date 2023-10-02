#include "main.h"

/**
 * append_text_to_file - function to appends text
 * at the end of a file
 * @filename: a * to filename.
 * @text_content: content to add.
 *
 * Return: appended text.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int no_letters;
	int per;

	if (!filename)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);
	if (text_content)
	{
		for (no_letters = 0; text_content[no_letters]; no_letters++)
			;
		per = write(file_d, text_content, no_letters);
		if (per == -1)
			return (-1);
	}
	close(file_d);
	return (1);
}
