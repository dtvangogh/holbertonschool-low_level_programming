#include "holberton.h"
/**
 * append_text_to_file - appends text to end of a file.
 * @filename: name of file
 * @text_content: what to append
 * Return: 1 on success and -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int n;
	int fp;
	int count;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fp = open(filename, O_RDWR | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	for (count = 0; text_content[count] != '\0'; count++)
	{
	}
	n = write(fp, text_content, count);
	close(fp);
	if (n == -1)
		return (-1);
	return (1);
}
