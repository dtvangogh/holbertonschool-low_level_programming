#include "holberton.h"
/**
 * create_file - creates a file and adds text
 * @filename: name of file to open
 * @text_content: text to add to open file
 * Return: returns -1 on failure 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int n;
	int count;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (count = 0; text_content[count] != '\0'; count++)
	{
	}
	n = write(fp, text_content, count);
	close(fp);
	if (n == -1)
		return (-1);
	return (1);
}
