#include "holberton.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#define BUFFSIZE 1024

/**
 * main - cps contents of one file to another
 * @ac: arguement count
 * @av: arguement list: file names
 * Return: 0;
 */

int main(int ac, char **av)
{
	int from, to;
	int original, copy;
	original = copy = 1;
	char buff[BUFFSIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from = open(av[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while (original)
	{
		original = read(from, buff, BUFFSIZE);
		if (original == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (original > 0)
		{
			copy = write(to, buff, original);
			if (copy == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	copy = close(from);
	if (copy == -1)
		dprintf(STDERR_FILENO, "Error: Can't close from %d\n", from), exit(100);
	copy = close(to);
	if (copy == -1)
		dprintf(STDERR_FILENO, "Error: Can't close from %d\n", to), exit(100);
	return (0);
}
