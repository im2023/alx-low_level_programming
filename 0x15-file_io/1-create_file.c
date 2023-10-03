#include "main.h"

/**
 * create_file - Fonction reating a file and writing text content to it.
 *
 * @filename: is pointing name of the file to be created.
 *
 * @text_content: file of the text to be writed.
 *
 * Return: On success, 1. On failure or if @filename is NULL, -1.
 */


int create_file(const char *filename, char *text_content)
{
	int file_desc;
	int bytes_written;
	int lens = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lens = 0; text_content[lens];)
			lens++;
	}

	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	bytes_written = write(file_desc, text_content, lens);

	if (file_desc == -1 || bytes_written == -1)

		return (-1);

	close(file_desc);

	return (1);
}
