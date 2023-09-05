#include "main.h"

/**
 * append_text_to_file - Appending the text to a file.
 *
 * @filename: The name of the file to create.
 *
 * @text_content: The text to write.
 *
 * Return: 1 if succes, -1 if fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	int bytes;
	int len = 0;

	if (filename == NULL)

		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_desc = open(filename, O_WRONLY | O_APPEND);

	bytes = write(file_desc, text_content, len);

	if (file_desc == -1 || bytes == -1)

		return (-1);

	close(file_desc);

	return (1);
}
