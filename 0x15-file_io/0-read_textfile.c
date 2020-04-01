#include "holberton.h"
/**
 * read_textfile - reads a textfile
 * @filename: the file passed into function
 * @letters: number  of letters to print/read
 * Return: returns the number of bytes to read/print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reader, writer;
	int file;
	char *size;

	if (filename == NULL)
	{
		return (0);
	}

	size = malloc(letters);

	if (size == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDWR);
	if (file == -1)
	{
		free(size);
		return (0);
	}

	reader = read(file, size, letters);
	if (reader == -1)
	{
		close(file);
		free(size);
		return (0);
	}

	writer = write(STDOUT_FILENO, size, reader);
	free(size);
	close(file);

	if (writer == reader)
		return (writer);

	return (0);
}
