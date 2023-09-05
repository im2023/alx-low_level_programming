#include "main.h"

/**
 * read_textfile - is Reading a text file and prints it to STDOUT.
 *
 * @filename:The name of the text file to be read.
 *
 * @letters:The number of letters or (bytes) to be read and printed.
 * 
 * Return: On success, the actual number of bytes read and printed.
 *         On failure or if filename is NULL, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *r;
	ssize_t j;
	ssize_t t;
	ssize_t s;

	j = open(filename, O_RDONLY);

	if (j == -1)

		return (0);

	r = malloc(sizeof(char) * letters);
	s = read(j, r, letters);
	t = write(STDOUT_FILENO, r, s);

	free(r);
	close(j);

	return (t);
}
